/*
 * Author - Mike Blandford
 *
 * Based on er9x by Erez Raviv <erezraviv@gmail.com>
 *
 * Based on th9x -> http://code.google.com/p/th9x/
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#include <stdint.h>
#include <string.h>
#ifdef PCBSKY
#include "AT91SAM3S4.h"
#endif
#ifdef PCB9XT
#include "X9D/stm32f2xx.h"
#include "X9D/hal.h"
#endif

#include "ersky9x.h"
#include "templates.h"
#include "myeeprom.h"
#include "file.h"
#include "debug.h"
#include "stringidx.h"

#include "frsky.h"

int16_t *const CalibMid[] =
{ 
	&g_eeGeneral.calibMid[0],
	&g_eeGeneral.calibMid[1],
	&g_eeGeneral.calibMid[2],
	&g_eeGeneral.calibMid[3],
	&g_eeGeneral.calibMid[4],
	&g_eeGeneral.calibMid[5],
	&g_eeGeneral.calibMid[6],
	&g_eeGeneral.x9dcalibMid,
#ifdef PCBX9D
#if REVPLUS
#ifdef REV9E
	&g_eeGeneral.xcalibMid[0],
	&g_eeGeneral.xcalibMid[1],
	&g_eeGeneral.xcalibMid[2],
#endif
	&g_eeGeneral.x9dPcalibMid
#endif
#endif
#if defined(PCBSKY) || defined(PCB9XT)
	&g_eeGeneral.xcalibMid[0],
	&g_eeGeneral.xcalibMid[1],
	&g_eeGeneral.xcalibMid[2],
#endif
} ;

int16_t *const CalibSpanPos[] =
{ 
	&g_eeGeneral.calibSpanPos[0],
	&g_eeGeneral.calibSpanPos[1],
	&g_eeGeneral.calibSpanPos[2],
	&g_eeGeneral.calibSpanPos[3],
	&g_eeGeneral.calibSpanPos[4],
	&g_eeGeneral.calibSpanPos[5],
	&g_eeGeneral.calibSpanPos[6],
	&g_eeGeneral.x9dcalibSpanPos,
#ifdef PCBX9D
#if REVPLUS
#ifdef REV9E
	&g_eeGeneral.xcalibSpanPos[0],
	&g_eeGeneral.xcalibSpanPos[1],
	&g_eeGeneral.xcalibSpanPos[2],
#endif
	&g_eeGeneral.x9dPcalibSpanPos
#endif
#endif
#if defined(PCBSKY) || defined(PCB9XT)
	&g_eeGeneral.xcalibSpanPos[0],
	&g_eeGeneral.xcalibSpanPos[1],
	&g_eeGeneral.xcalibSpanPos[2],
#endif
} ;

int16_t *const CalibSpanNeg[] =
{
	&g_eeGeneral.calibSpanNeg[0],
	&g_eeGeneral.calibSpanNeg[1],
	&g_eeGeneral.calibSpanNeg[2],
	&g_eeGeneral.calibSpanNeg[3],
	&g_eeGeneral.calibSpanNeg[4],
	&g_eeGeneral.calibSpanNeg[5],
	&g_eeGeneral.calibSpanNeg[6],
	&g_eeGeneral.x9dcalibSpanNeg,
#ifdef PCBX9D
#if REVPLUS
#ifdef REV9E
	&g_eeGeneral.xcalibSpanNeg[0],
	&g_eeGeneral.xcalibSpanNeg[1],
	&g_eeGeneral.xcalibSpanNeg[2],
#endif
	&g_eeGeneral.x9dPcalibSpanNeg
#endif
#endif
#if defined(PCBSKY) || defined(PCB9XT)
	&g_eeGeneral.xcalibSpanNeg[0],
	&g_eeGeneral.xcalibSpanNeg[1],
	&g_eeGeneral.xcalibSpanNeg[2],
#endif
} ;

uint16_t evalChkSum()
{
  uint16_t sum=0;
	uint16_t *p ;
	p = ( uint16_t *)g_eeGeneral.calibMid ;
  for (int i=0; i<12;i++)
	{
    sum += *p++ ;
	}
  return sum;
}

void generalDefault()
{
  memset(&g_eeGeneral,0,sizeof(g_eeGeneral));
  g_eeGeneral.myVers   =  MDSKYVERS;
//  g_eeGeneral.currModel=  0;
#ifdef PCB9XT
  g_eeGeneral.contrast = 25 ;
#else
  g_eeGeneral.contrast = 18 ;
#endif
  g_eeGeneral.vBatWarn = 65;
  g_eeGeneral.stickMode=  1;
	g_eeGeneral.disablePotScroll=  1;
	g_eeGeneral.bright = 50 ;
	g_eeGeneral.volume = 2 ;
	g_eeGeneral.lightSw = MAX_SKYDRSWITCH ;	// ON
	g_eeGeneral.filterInput = 1 ;
	g_eeGeneral.beeperVal = 3 ;
	g_eeGeneral.gpsFormat = 1 ;

  for (int i = 0; i < NUM_ANALOG_CALS ; ++i )
	{
		*CalibMid[i] = 0x400 ;
		*CalibSpanPos[i] = 0x300 ;
		*CalibSpanNeg[i] = 0x300 ;
  }
  strncpy_P(g_eeGeneral.ownerName,PSTR(STR_ME), 10);
  g_eeGeneral.chkSum = evalChkSum() ;
	eeDirty(EE_GENERAL) ;
}

void modelDefault(uint8_t id)
{
  memset(&g_model, 0, sizeof(SKYModelData));
  strncpy_P(g_model.name,PSTR(STR_MODEL), 10 );
  g_model.name[5]='0'+(id+1)/10;
  g_model.name[6]='0'+(id+1)%10;
	g_model.modelVersion = 4 ;
	g_model.trimInc = 2 ;

  applyTemplate(0); //default 4 channel template

	// Set all mode trims to be copies of FM0
	for ( uint32_t i = 0 ; i < MAX_MODES ; i += 1 )
	{
		g_model.phaseData[i].trim[0] = TRIM_EXTENDED_MAX + 1 ;
		g_model.phaseData[i].trim[1] = TRIM_EXTENDED_MAX + 1 ;
		g_model.phaseData[i].trim[2] = TRIM_EXTENDED_MAX + 1 ;
		g_model.phaseData[i].trim[3] = TRIM_EXTENDED_MAX + 1 ;
	}
//#ifdef PCB9XT
//	g_model.protocol = PROTO_OFF ;
//	g_model.xprotocol = PROTO_OFF ;
	g_model.Module[0].protocol = PROTO_OFF ;
	g_model.Module[1].protocol = PROTO_OFF ;
//#endif
	eeDirty(EE_MODEL) ;
}

bool eeDuplicateModel(uint8_t id)
{
  uint32_t i;
  for( i=id ; i<MAX_MODELS; i++)
  {
    if(! eeModelExists(i) ) break;
  }
  if(i>=MAX_MODELS)
	{
  	for( i=0 ; i<id ; i++)
		{
    	if(! eeModelExists(i) ) break;
		}
  	if(i>=id) return false; //no free space in directory left
	}

	ee32CopyModel( i+1, id ) ;
//	ee32CopyModel( i, id ) ;

	return true ;
}


void eeReadAll()
{
  if(!ee32LoadGeneral() )
  {
    alert((char const *)PSTR(STR_BAD_EEPROM), true);
#ifdef PCB9XT
    g_eeGeneral.contrast = 25 ;
#else
    g_eeGeneral.contrast = 18 ;
#endif
    message(PSTR(STR_EE_FORMAT));
    generalDefault();

    modelDefault(0);
		STORE_GENERALVARS;
    STORE_MODELVARS;        
  }
	else
	{
  	ee32LoadModel(g_eeGeneral.currModel);
	}

	// Now update the trainer values if necessary.
  uint32_t i ;
	for ( i = 0 ; i < 4 ; i += 1 )
	{
		if ( g_eeGeneral.Xtrainer.mix[i].swtch != -16 )
		{
			g_eeGeneral.XexTrainer[i].swtch = g_eeGeneral.Xtrainer.mix[i].swtch ;
			g_eeGeneral.XexTrainer[i].studWeight = g_eeGeneral.Xtrainer.mix[i].studWeight * 13 / 4 ;
			g_eeGeneral.Xtrainer.mix[i].swtch = -16 ;
			STORE_GENERALVARS ;
		}
	}
}


void eeDirty(uint8_t msk)
{
  if(!msk) return;

	// New file system operations
	if ( msk & EE_GENERAL )
	{
		ee32StoreGeneral() ;
	}
	if ( msk & EE_MODEL )
	{
		ee32StoreModel( g_eeGeneral.currModel, msk & EE_TRIM ) ;
	}

}

// SKY/AR9X/9XR-PRO - use [0] for module, [1] for PPM2
// X9D/X9E/9Xtreme - use [0] for internal, [1] for external

//void fetchProtocolData()
//{
//	Protocols[0].protocol = g_model.protocol ;
//	Protocols[0].country = g_model.country ;
//	Protocols[0].pulsePol = g_model.pulsePol ;
//	Protocols[0].ppmNCH = g_model.ppmNCH ;
//	Protocols[0].ppmDelay = g_model.ppmDelay ;
//	Protocols[0].ppmFrameLength = g_model.ppmFrameLength ;
//	Protocols[0].startChannel = g_model.startChannel ;
//	Protocols[0].pxxRxNum = g_model.pxxRxNum ;
//	Protocols[0].option_protocol = g_model.option_protocol ;
//	Protocols[0].sub_protocol = g_model.sub_protocol ;

//	Protocols[1].protocol = g_model.xprotocol ;
//	Protocols[1].country = g_model.xcountry ;
//	Protocols[1].pulsePol = g_model.xpulsePol ;
//	Protocols[1].ppmNCH = g_model.xppmNCH ;
//	Protocols[1].ppmDelay = g_model.xppmDelay ;
//	Protocols[1].ppmFrameLength = g_model.xppmFrameLength ;
//	Protocols[1].startChannel = g_model.xstartChannel ;
//	Protocols[1].pxxRxNum = g_model.xPxxRxNum ;
//	Protocols[1].option_protocol = g_model.xoption_protocol ;
//	Protocols[1].sub_protocol = g_model.xsub_protocol ;
//}

//void storeProtocolData()
//{
//	g_model.protocol = Protocols[0].protocol ;
//	g_model.country = Protocols[0].country ;
//	g_model.pulsePol = Protocols[0].pulsePol ;
//	g_model.ppmNCH = Protocols[0].ppmNCH ;
//	g_model.ppmDelay = Protocols[0].ppmDelay ;
//	g_model.ppmFrameLength = Protocols[0].ppmFrameLength ;
//	g_model.startChannel = Protocols[0].startChannel ;
//	g_model.pxxRxNum = Protocols[0].pxxRxNum ;
//	g_model.option_protocol = Protocols[0].option_protocol ;
//	g_model.sub_protocol = Protocols[0].sub_protocol ;

//	g_model.xprotocol = Protocols[1].protocol ;
//	g_model.xcountry = Protocols[1].country ;
//	g_model.xpulsePol = Protocols[1].pulsePol ;
//	g_model.xppmNCH = Protocols[1].ppmNCH ;
//	g_model.xppmDelay = Protocols[1].ppmDelay ;
//	g_model.xppmFrameLength = Protocols[1].ppmFrameLength ;
//	g_model.xstartChannel = Protocols[1].startChannel ;
//	g_model.xPxxRxNum = Protocols[1].pxxRxNum ;
//	g_model.xoption_protocol = Protocols[1].option_protocol ;
//	g_model.xsub_protocol = Protocols[1].sub_protocol ;
//}



