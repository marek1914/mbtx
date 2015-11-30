/****************************************************************************
*  Copyright (c) 2013 by Michael Blandford. All rights reserved.
*
*  Redistribution and use in source and binary forms, with or without
*  modification, are permitted provided that the following conditions
*  are met:
*
*  1. Redistributions of source code must retain the above copyright
*     notice, this list of conditions and the following disclaimer.
*  2. Redistributions in binary form must reproduce the above copyright
*     notice, this list of conditions and the following disclaimer in the
*     documentation and/or other materials provided with the distribution.
*  3. Neither the name of the author nor the names of its contributors may
*     be used to endorse or promote products derived from this software
*     without specific prior written permission.
*
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
*  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
*  THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
*  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
*  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
*  OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
*  AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
*  OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
*  THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
*  SUCH DAMAGE.
*
****************************************************************************
* Other Authors:
 * - Andre Bernet
 * - Bertrand Songis
 * - Bryan J. Rentoul (Gruvin)
 * - Cameron Weeks
 * - Erez Raviv
 * - Jean-Pierre Parisy
 * - Karl Szmutny
 * - Michal Hlavinka
 * - Pat Mackenzie
 * - Philip Moss
 * - Rob Thomson
 * - Romolo Manfredini
 * - Thomas Husterer
*
****************************************************************************/

#include "en.h"

extern const char * const English[] ;

const char * const English[] =
{
	ISTR_ON            ,
	ISTR_OFF           ,
	ISTR_ALTEQ	       ,
	ISTR_TXEQ		       ,
	ISTR_RXEQ		       ,
	ISTR_TRE012AG	     ,
	ISTR_YELORGRED	   ,
	ISTR_A_EQ		       ,
	ISTR_SOUNDS	       ,
	ISTR_SWITCH_WARN	 ,
	ISTR_TIMER         ,
	ISTR_PPMCHANNELS	 ,
	ISTR_MAH_ALARM     ,
	ISTR_LIMITS		     ,
	ISTR_EE_LOW_MEM    ,
	ISTR_ALERT		     ,
	ISTR_THR_NOT_IDLE  ,
	ISTR_RST_THROTTLE  ,
	ISTR_PRESS_KEY_SKIP,
	ISTR_ALARMS_DISABLE,
	ISTR_OLD_VER_EEPROM,
	ISTR_RESET_SWITCHES,
	ISTR_LOADING       ,
	ISTR_MESSAGE       ,
	ISTR_PRESS_ANY_KEY ,
	ISTR_MSTACK_UFLOW  ,
	ISTR_MSTACK_OFLOW  ,
	ISTR_CHANS_GV	     ,
	ISTR_CHANS_RAW	   ,
	ISTR_CH	           ,
	ISTR_TMR_MODE	     ,
	ISTR_ME            ,
	ISTR_MODEL         ,
	ISTR_BAD_EEPROM    ,
	ISTR_EE_FORMAT     ,
	ISTR_GENWR_ERROR   ,
	ISTR_EE_OFLOW      ,
	ISTR_T_S_4CHAN     ,
	ISTR_T_TCUT        ,
	ISTR_T_STICK_TCUT  ,
	ISTR_T_V_TAIL      ,
	ISTR_T_ELEVON      ,
	ISTR_T_HELI_SETUP  ,
	ISTR_T_GYRO        ,
	ISTR_T_SERVO_TEST  ,
	ISTR_TELEM_ITEMS	 ,
	ISTR_TELEM_SHORT   ,
	ISTR_GV            ,
	ISTR_OFF_ON        ,
	ISTR_HYPH_INV      ,
	ISTR_VERSION       ,
	ISTR_TRAINER       ,
	ISTR_SLAVE         ,
	ISTR_MENU_DONE     ,
	ISTR_CURVES        ,
	ISTR_CURVE         ,
	ISTR_GLOBAL_VAR    ,
	ISTR_VALUE         ,
	ISTR_PRESET        ,
	ISTR_CV            ,
	ISTR_LIMITS        ,
	ISTR_COPY_TRIM     ,
	ISTR_TELEMETRY     ,
	ISTR_USR_PROTO     ,
	ISTR_FRHUB_WSHHI   ,
	ISTR_MET_IMP       ,
	ISTR_A_CHANNEL     ,
	ISTR_ALRM          ,
	ISTR_TELEMETRY2    ,
	ISTR_TX_RSSIALRM   ,
	ISTR_NUM_BLADES    ,
	ISTR_ALT_ALARM     ,
	ISTR_OFF122400     ,
	ISTR_VOLT_THRES    ,
	ISTR_GPS_ALTMAIN   ,
	ISTR_CUSTOM_DISP   ,
	ISTR_FAS_OFFSET    ,
	ISTR_VARIO_SRC     ,
	ISTR_VSPD_A2       ,
	ISTR_2SWITCH       ,
	ISTR_2SENSITIVITY  ,
	ISTR_GLOBAL_VARS   ,
	ISTR_GV_SOURCE     ,
	ISTR_TEMPLATES     ,
	ISTR_CHAN_ORDER    ,
	ISTR_SP_RETA       ,
	ISTR_CLEAR_MIXES   ,
	ISTR_SAFETY_SW     ,
	ISTR_NUM_VOICE_SW  ,
	ISTR_V_OPT1        ,
	ISTR_VS            ,
	ISTR_VOICE_OPT     ,
	ISTR_CUST_SWITCH   ,
	ISTR_S             ,
	ISTR_15_ON         ,
	ISTR_EDIT_MIX      ,
	ISTR_2SOURCE       ,
	ISTR_2WEIGHT       ,
	ISTR_FMTRIMVAL     ,
	ISTR_OFFSET        ,
	ISTR_2FIX_OFFSET   ,
	ISTR_ENABLEEXPO    ,
	ISTR_2TRIM         ,
	ISTR_15DIFF        ,
	ISTR_Curve         ,
	ISTR_2WARNING      ,
	ISTR_2MULTIPLEX    ,
	ISTR_ADD_MULT_REP  ,
	ISTR_2DELAY_DOWN   ,
	ISTR_2DELAY_UP     ,
	ISTR_2SLOW_DOWN    ,
	ISTR_2SLOW_UP      ,
	ISTR_MAX_MIXERS    ,
	ISTR_PRESS_EXIT_AB ,
	ISTR_YES_NO        ,
	ISTR_MENU_EXIT     ,
	ISTR_DELETE_MIX    ,
	ISTR_MIX_POPUP     ,
	ISTR_MIXER         ,
	ICHR_S						 ,
	ICHR_D						 ,
	ICHR_d						 ,
	ISTR_EXPO_DR       ,
	ISTR_4DR_MID       ,
	ISTR_4DR_LOW       ,
	ISTR_4DR_HI        ,
	ISTR_2EXPO         ,
	ISTR_DR_SW1        ,
	ISTR_DR_SW2        ,
	ISTR_DUP_MODEL     ,
	ISTR_DELETE_MODEL  ,
	ISTR_DUPLICATING   ,
	ISTR_SETUP         ,
	ISTR_NAME          ,
	ISTR_VOICE_INDEX   ,
	ISTR_TRIGGERA      ,
	ISTR_TRIGGERB      ,
	ISTR_COUNT_DOWN_UP ,
	ISTR_T_TRIM        ,
	ISTR_T_EXPO        ,
	ISTR_TRIM_INC      ,
	ISTR_TRIM_OPTIONS  ,
	I_REMOVED					 , //	ISTR_TRIM_SWITCH   ,
	ISTR_BEEP_CENTRE   ,
	ISTR_RETA123       ,
	ISTR_PROTO         ,
	ISTR_21_USEC       ,
	ISTR_13_RXNUM      ,
	ISTR_23_US         ,
	ISTR_PPMFRAME_MSEC ,
	ISTR_SEND_RX_NUM   ,
	ISTR_DSM_TYPE      ,
	ISTR_PPM_1ST_CHAN  ,
	ISTR_SHIFT_SEL     ,
	ISTR_POS_NEG       ,
	ISTR_E_LIMITS      ,
	ISTR_Trainer       ,
	ISTR_T2THTRIG      ,
	ISTR_AUTO_LIMITS   ,
	ISTR_1_RETA        ,
	ISTR_FL_MODE       ,
	ISTR_SWITCH        ,
	ISTR_TRIMS         ,
	ISTR_MODES         ,
	ISTR_SP_FM0        ,
	ISTR_SP_FM         ,
	ISTR_HELI_SETUP    ,
	ISTR_X_OFF_ON			 ,
	0,
	0,
	0,
	0,
	0,
	ISTR_MODEL_POPUP   ,
	ISTR_MODELSEL      ,
	ISTR_11_FREE       ,
	ISTR_CALIBRATION   ,
	ISTR_MENU_TO_START ,
	ISTR_SET_MIDPOINT  ,
	ISTR_MOVE_STICKS   ,
	ISTR_ANA           ,
	ISTR_DIAG          ,
	ISTR_KEYNAMES      ,
	ISTR_TRIM_M_P      ,
	ISTR_OFF_PLUS_EQ   ,
	ISTR_CH1_4         ,
	ISTR_MULTIPLIER    ,
	ISTR_CAL           ,
	ISTR_MODE_SRC_SW   ,
	ISTR_RADIO_SETUP   ,
	ISTR_OWNER_NAME    ,
	ISTR_BEEPER        ,
	ISTR_BEEP_MODES    ,
	ISTR_SOUND_MODE    ,
	ISTR_SPEAKER_OPTS  ,
	ISTR_VOLUME        ,
	ISTR_SPEAKER_PITCH ,
	ISTR_HAPTICSTRENGTH,
	ISTR_CONTRAST      ,
	ISTR_BATT_WARN     ,
	ISTR_INACT_ALARM   ,
	ISTR_THR_REVERSE   ,
	ISTR_MINUTE_BEEP   ,
	ISTR_BEEP_COUNTDOWN,
	ISTR_FLASH_ON_BEEP ,
	ISTR_LIGHT_SWITCH  ,
	ISTR_LIGHT_INVERT  ,
	ISTR_LIGHT_AFTER   ,
	ISTR_LIGHT_STICK   ,
	ISTR_SPLASH_SCREEN ,
	ISTR_SPLASH_NAME   ,
	ISTR_THR_WARNING   ,
	ISTR_DEAFULT_SW    ,
	ISTR_MEM_WARN      ,
	ISTR_ALARM_WARN    ,
	ISTR_POTSCROLL     ,
	ISTR_STICKSCROLL   ,
	ISTR_BANDGAP       ,
	ISTR_ENABLE_PPMSIM ,
	ISTR_CROSSTRIM     ,
	ISTR_INT_FRSKY_ALRM,
	ISTR_MODE          ,
	ISWITCHES_STR      ,
	ISWITCH_WARN_STR	 ,
	ICURV_STR          ,
	ICSWITCH_STR       ,
	ISWASH_TYPE_STR    ,
	ISTR_STICK_NAMES   ,
	ISTR_STAT          ,
	ISTR_STAT2         ,
	ISTR_TRIM_OPTS     ,
	ISTR_TTM           ,
	ISTR_FUEL          ,
	ISTR_12_RPM        ,
	ISTR_LAT_EQ        ,
	I_REMOVED					 , //	ISTR_LON_EQ        ,
	I_REMOVED					 , //	ISTR_ALT_MAX       ,
	I_REMOVED					 , //	ISTR_SPD_KTS_MAX   ,
	ISTR_11_MPH        ,
	ISTR_SINK_TONES		 , 
	ISTR_ST_CARD_STAT  ,
	ISTR_4_READY       ,
	ISTR_NOT           ,
	ISTR_BOOT_REASON   ,
	ISTR_6_WATCHDOG    ,
	ISTR_5_UNEXPECTED  ,
	ISTR_6_SHUTDOWN    ,
	ISTR_6_POWER_ON    ,
	ISTR_MONTHS        ,
	ISTR_MENU_REFRESH  ,
	ISTR_DATE_TIME     ,
	ISTR_SEC           ,
	ISTR_MIN_SET       ,
	ISTR_HOUR_MENU_LONG,
	ISTR_DATE          ,
	ISTR_MONTH         ,
	ISTR_YEAR_TEMP     ,
	ISTR_YEAR          ,
	ISTR_BATTERY       ,
	ISTR_Battery       ,
	ISTR_CURRENT_MAX   ,
	ISTR_CPU_TEMP_MAX  ,
	ISTR_MEMORY_STAT   ,
	ISTR_GENERAL       ,
	ISTR_Model         ,
	ISTR_RADIO_SETUP2  ,
	ISTR_BRIGHTNESS    ,
	ISTR_CAPACITY_ALARM,
	ISTR_BT_BAUDRATE   ,
	ISTR_ROTARY_DIVISOR,
	ISTR_STICK_LV_GAIN ,
	ISTR_STICK_LH_GAIN ,
	ISTR_STICK_RV_GAIN ,
	ISTR_STICK_RH_GAIN ,
	ISTR_BIND					 ,
	ISTR_RANGE				 ,
	ISTR_ALRMS_OFF     ,
	ISTR_OLD_EEPROM    ,
	ISTR_TRIGA_OPTS    ,
	ISTR_CHK_MIX_SRC   ,
	ISTR_BT_TELEMETRY	 ,	
	ISTR_FRSKY_COM_PORT,
	ISTR_INVERT_COM1	 ,	
	ISTR_LOG_SWITCH		 ,	
	ISTR_LOG_RATE			 ,	
	ISTR_6_BINDING		 ,	
	ISTR_RANGE_RSSI		 ,	
	ISTR_FAILSAFE			 ,	
	ISTR_VOLUME_CTRL	 ,	
	ISTR_PROT_OPT			 ,	
	ISTR_TYPE					 ,	
	ISTR_COUNTRY			 ,	
	ISTR_SP_FAILSAFE	 ,	
	ISTR_PPM2_START		 ,	
	ISTR_FOLLOW				 ,	
	ISTR_PPM2_CHANNELS ,	
	ISTR_FILTER_ADC		 ,	
	ISTR_SCROLLING		 ,	
	ISTR_ALERT_YEL		 ,	
	ISTR_ALERT_ORG		 ,	
	ISTR_ALERT_RED		 ,	
	ISTR_LANGUAGE			 ,
#ifdef PCBX9D
	IHW_SWITCHES_STR   ,
#else
	0,
#endif
	IHW_SWITCHARROW_STR,
	ISTR_RSSI_WARN		 ,	 
	ISTR_RSSI_CRITICAL ,	
	ISTR_RX_VOLTAGE		 ,
	ISTR_DSM_WARNING	 ,	 
	ISTR_FADESLOSSHOLDS,
	ISTR_DSM_CRITICAL	 ,
	ISTR_BT_TRAINER		 ,
	ISTR_T_RANGE_TEST	 ,
	ISTR_CHANS_EXTRA	 ,
	ISTR_HELI_TEXT		 ,
	ISTR_MULTI_TYPE    ,
	ISTR_MULTI_OPTION  ,

	ISTR_Display		   ,
	ISTR_AudioHaptic   ,
	ISTR_Alarms			   ,
	ISTR_General		   ,
	ISTR_Controls		   ,
	ISTR_Hardware		   ,
	ISTR_Calibration   ,
	0								   ,
	ISTR_Version		   ,
	ISTR_ModuleRssi	   ,
	ISTR_DateTime		   ,
	ISTR_DiagSwtch	   ,
	ISTR_DiagAna		   ,
	
	ISTR_Mixer		     ,
	ISTR_Cswitches	   ,
	ISTR_Telemetry	   ,
	ISTR_limits			   ,
	ISTR_Bluetooth	   ,
	ISTR_heli_setup	   ,
	ISTR_Curves			   ,
	ISTR_Expo				   ,
	ISTR_Globals		   ,
	ISTR_Timer		     ,
	ISTR_Modes			   ,
	ISTR_Voice		     ,
	ISTR_Protocol		   ,
	ISTR_Safety			   ,
	ISTR_Eeprom
} ;
