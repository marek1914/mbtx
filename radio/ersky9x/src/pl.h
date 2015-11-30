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

// Special characters:
// �  use \300
// �  use \301
// �  use \302
// �  use \303
// �  use \304
// �  use \305
// �  use \306
// �  use \307
// �  use \310
// �  use \311
// �  use \312
// �  use \313
// �  use \314
// �  use \315
// �  use \316
// �  use \317

#define FWx4		"\030"
#define FWx5		"\036"
#define FWx10		"\074"
#define FWx11		"\102"
#define FWx12		"\110"
#define FWx13		"\116"
#define FWx14		"\124"
#define FWx15		"\132"
#define FWx16		"\140"
#define FWx17		"\146"
#define FWx18		"\152"

#define I_REMOVED						0

#define ISTR_X_OFF_ON				FWx17"\001""\003"ISTR_ON"\306. "ISTR_OFF

#define ISTR_ON             " W\306"
#define ISTR_OFF            "WY\306"

#define ISTR_ALTEQ	         "Wys=" 
#define ISTR_TXEQ			       "\003Tx=Swr"
#define ISTR_RXEQ		       "Rx="
#define ISTR_TRE012AG	     "TRE012AG"

// ISTR_YELORGRED indexed 3 char each
#define ISTR_YELORGRED	     "\003---\315\311\305PomCze"
#define ISTR_A_EQ		       "A ="
#define ISTR_SOUNDS	       "\006Uwaga1""Uwaga2""Cheap ""Ring  ""SciFi ""Robot ""Chirp ""Tada  ""Crickt""Syrena""AlmClk""Ratata""Tick  ""Wibr 1""Wibr 2""Wibr 3"
#define ISTR_SWITCH_WARN	   "Sprawd\316 prze\305\300czniki "
// ISTR_TIMER exactly 5 chars long
#define ISTR_TIMER          "Stoper"

// ISTR_PPMCHANNELS indexed 4 char each
#define ISTR_PPMCHANNELS	   "CH"

#define ISTR_MAH_ALARM      "mAh Alarm"


// er9x.cpp
// ********
//#define ISTR_LIMITS		     "ZAKRESY"
#define ISTR_EE_LOW_MEM     "EEPROM ma\305o pam"
#define ISTR_ALERT		      " UWAGA"
#define ISTR_THR_NOT_IDLE   "Gaz nie na zerze"
#define ISTR_RST_THROTTLE   "Kasuj Gaz"
#define ISTR_PRESS_KEY_SKIP "Pomi\307-> wci\312nij jaki\312          przycisk"
#define ISTR_ALARMS_DISABLE "Alarmy wy\305\300czone"
#define ISTR_OLD_VER_EEPROM " Stara Wersia EEPROM   Sprawd\316 ustawienia"
#define ISTR_RESET_SWITCHES "Ustaw prze\305\300czniki na 0"
#define ISTR_LOADING        "\306aduj\304"
#define ISTR_MESSAGE        "INFO"
#define ISTR_PRESS_ANY_KEY  "wci\312nij guzik"
#define ISTR_MSTACK_UFLOW   "mStack uflow"
#define ISTR_MSTACK_OFLOW   "mStack oflow"

#if defined(PCBSKY) || defined(PCB9XT)
#define ISTR_CHANS_GV	     "\004P1  P2  P3  P\311\305 Ca\305yCYC1CYC2CYC3PPM1PPM2PPM3PPM4PPM5PPM6PPM7PPM8CH1 CH2 CH3 CH4 CH5 CH6 CH7 CH8 CH9 CH10CH11CH12CH13CH14CH15CH16CH17CH18CH19CH20CH21CH22CH23CH24SWCHGV1 GV2 GV3 GV4 GV5 GV6 GV7 THISSC1 SC2 SC3 SC4 SC5 SC6 SC7 SC8 "
#define ISTR_CHANS_RAW	   "\004P1  P2  P3  P\311\305 Ca\305yCYC3PPM1PPM2PPM3PPM4PPM5PPM6PPM7PPM8CH1 CH2 CH3 CH4 CH5 CH6 CH7 CH8 CH9 CH10CH11CH12CH13CH14CH15CH16CH17CH18CH19CH20CH21CH22CH23CH24SWCH"
#define ISTR_CHANS_EXTRA   "\004P4  P5  P6  P7  "
#endif
#ifdef PCBX9D
#define ISTR_CHANS_GV	     "\004P1  P2  SL  P\311\305 Ca\305yCYC1CYC2CYC3PPM1PPM2PPM3PPM4PPM5PPM6PPM7PPM8CH1 CH2 CH3 CH4 CH5 CH6 CH7 CH8 CH9 CH10CH11CH12CH13CH14CH15CH16CH17CH18CH19CH20CH21CH22CH23CH24SWCHGV1 GV2 GV3 GV4 GV5 GV6 GV7 THISSC1 SC2 SC3 SC4 SC5 SC6 SC7 SC8 "
#define ISTR_CHANS_RAW	   "\004P1  P2  SL  P\311\305 Ca\305yCYC1CYC2CYC3PPM1PPM2PPM3PPM4PPM5PPM6PPM7PPM8CH1 CH2 CH3 CH4 CH5 CH6 CH7 CH8 CH9 CH10CH11CH12CH13CH14CH15CH16CH17CH18CH19CH20CH21CH22CH23CH24SWCH"
#define ISTR_CHANS_EXTRA   "\004SR  P3  P4  P5  P6  "
#endif

#define ISTR_CH	           "CH"
#define ISTR_TMR_MODE	     "\003WY\306W\306 RUsRU%ELsEL%THsTH%ALsAL%P1 P1%P2 P2%P3 P3%"

// pers.cpp
// ********
#define ISTR_ME             "JA        "
#define ISTR_MODEL          "MODEL     "
#define ISTR_BAD_EEPROM     "Z\305y EEprom Data"
#define ISTR_EE_FORMAT      "EEPROM Formatowanie"
#define ISTR_GENWR_ERROR    "B\305\300d zapisu"
#define ISTR_EE_OFLOW       "EEPROM pe\305ny"

// templates.cpp
// ***********
#define ISTR_T_S_4CHAN      "Prosty 4-CH"
#define ISTR_T_TCUT         "T-Cut"
#define ISTR_T_STICK_TCUT   "Sticky T-Cut"
#define ISTR_T_V_TAIL       "V-Tail"
#define ISTR_T_ELEVON       "SW.\\Delta"
#define ISTR_T_HELI_SETUP   "Heli Setup"
#define ISTR_T_GYRO         "Gyro Setup"
#define ISTR_T_SERVO_TEST   "Servo Test"
#define ISTR_T_RANGE_TEST   "Zakres Test"

// menus.cpp
// ***********
#define ISTR_TELEM_ITEMS	  "\004----A1= A2= RSSITSSITim1Tim2Alt GaltGspdT1= T2= RPM FUELMah1Mah2CvltBattAmpsMah CtotFasVAccXAccYAccZVspdGvr1Gvr2Gvr3Gvr4Gvr5Gvr6Gvr7FwatRxV Hdg A3= A4= SC1 SC2 SC3 SC4 SC5 SC6 SC7 SC8 RTC TmOK"
#define ISTR_TELEM_SHORT    "\004----TIM1TIM2BATTGvr1Gvr2Gvr3Gvr4Gvr5Gvr6Gvr7"
#define ISTR_GV             "GV"
#define ISTR_OFF_ON         "WY\306 W\306"
#define ISTR_HYPH_INV       FWx18"\001""\003---INV"
#define ISTR_VERSION        "WERSJA"
#define ISTR_TRAINER        "TRENER"
#define ISTR_SLAVE          "\007Drugi" 
#define ISTR_MENU_DONE      "[MENU] PO ZAKO\310CZENIU"
#define ISTR_CURVES         "KRZYWE"
#define ISTR_CURVE          "KRZYWA"
#define ISTR_GLOBAL_VAR     "FUNKCJE GLOBALNE"
#define ISTR_VALUE          "Warto\312\302"
#define ISTR_PRESET         "USTAWIENIA"
#define ISTR_CV             "CV"
#define ISTR_LIMITS         "ZAKRESY"
#define ISTR_COPY_TRIM      "Kopi\311j TRIM [MENU]"
#define ISTR_TELEMETRY      "TELEMETRIA"
#define ISTR_USR_PROTO      "UsrProto"
#define ISTR_FRHUB_WSHHI    "\005FrSkyWSHhiDSMx Jeti MavlkArduP"
#define ISTR_MET_IMP        "\003MetImp"
#define ISTR_A_CHANNEL      "A  kana\305"
#define ISTR_ALRM           "alrm"
#define ISTR_TELEMETRY2     "TELEMETRIA2"
#define ISTR_TX_RSSIALRM    "TxRSSIalrm"
#define ISTR_NUM_BLADES     "Num Blades"
#define ISTR_ALT_ALARM      "Alarm Wys"
#define ISTR_OFF122400      "\003OFF122400"
#define ISTR_VOLT_THRES     "Volt Thres="
#define ISTR_GPS_ALTMAIN    "Wysoko\312\302 GPS"
#define ISTR_CUSTOM_DISP    "Ustawienia Ekranu"
#define ISTR_FAS_OFFSET     "FAS Offset"
#define ISTR_VARIO_SRC      "Vario: \317rud\305o"
#define ISTR_VSPD_A2        "\004----vspdA2  SC1 SC2 SC3 SC4 SC5 SC6 SC7 SC8 "
#define ISTR_2SWITCH        "\001Prze\305\300cznik"
#define ISTR_2SENSITIVITY   "\001Czu\305o\312\302"
#define ISTR_GLOBAL_VARS    "GLOBAL VARS"
#if defined(PCBSKY) || defined(PCB9XT)
#define ISTR_GV_SOURCE      "\003---RtmEtmTtmAtmRENSK.SW.GazLotP1 P2 P3 c1 c2 c3 c4 c5 c6 c7 c8 c9 c10c11c12c13c14c15c16c17c18c19c20c21c22c23c24SC1SC2SC3SC4SC5SC6SC7SC8O1 O2 O3 O4 O5 O6 O7 O8 O9 O10O11O12O13O14O15O16O17O18O19O20O21O22O23O24RtsEtsTtsAts"
#define ISTR_EXTRA_SOURCE   ""
#endif
#ifdef PCBX9D
#define ISTR_GV_SOURCE      "\003---RtmEtmTtmAtmRENSK.SW.GazLotP1 P2 SL SR c1 c2 c3 c4 c5 c6 c7 c8 c9 c10c11c12c13c14c15c16c17c18c19c20c21c22c23c24SC1SC2SC3SC4SC5SC6SC7SC8O1 O2 O3 O4 O5 O6 O7 O8 O9 O10O11O12O13O14O15O16O17O18O19O20O21O22O23O24RtsEtsTtsAts"
#define ISTR_EXTRA_SOURCE   "\003SR P3 P4 P5 P6 "
#endif
#define ISTR_TEMPLATES      "SZABLONY"
#define ISTR_CHAN_ORDER     "Kolejno\312\302 kana\305"
#define ISTR_SP_RETA        " RETA"
#define ISTR_CLEAR_MIXES    "KASUJ MIXES [MENU]"
#define ISTR_SAFETY_SW      "SAFETY SWITCHES"
#define ISTR_NUM_VOICE_SW   "Numer Dzwi\304ku Sw"
#define ISTR_V_OPT1         "\007 8 Secs12 Secs16 Secs"
#define ISTR_VS             "VS"
#define ISTR_VOICE_OPT      "\006W\306    WY\306   BOTH  15Secs30Secs60SecsVaribl"
#define ISTR_CUST_SWITCH    "PRZE\306\301CZNIKI LOGICZNE"
#define ISTR_S              "S"
#define ISTR_15_ON          "\015W\305"
#define ISTR_EDIT_MIX       "EDYTUJ MIX "
#define ISTR_2SOURCE        "\001\317r\311d\305o"
#define ISTR_2WEIGHT        "\001Waga"
#define ISTR_FMTRIMVAL      "FmTrimVal"
#define ISTR_OFFSET         "Offset"
#define ISTR_2FIX_OFFSET    "\001Fix Offset"
#define ISTR_ENABLEEXPO     "\001W\305\300cz ExpoDr"
#define ISTR_2TRIM          "\001Trim"
#define ISTR_15DIFF         "\010Diff"
#define ISTR_Curve          "Krzywa"
#define ISTR_2WARNING       "\001Uwaga"
#define ISTR_2MULTIPLEX     "\001Multpx"
// ISTR_ADD_MULT_REP indexed 8 chars each
#define ISTR_ADD_MULT_REP   "\010Dodaj   Zamie�"
#define ISTR_2DELAY_DOWN    "\001Op\311\316 D\311\305"
#define ISTR_2DELAY_UP      "\001Op\311\316 G\311ra"
#define ISTR_2SLOW_DOWN     "\001Wolno D\311\305"
#define ISTR_2SLOW_UP       "\001Wolno G\311ra"
#define ISTR_MAX_MIXERS     "Max zakres mixera: 32"
#define ISTR_PRESS_EXIT_AB  "Naci\312nij [EXIT] -> Przerwij"
#define ISTR_YES_NO         "\003TAK\013NIE"
#define ISTR_MENU_EXIT      "\003[MENU]\013[EXIT]"
#define ISTR_DELETE_MIX     "USU\310 MIX?"
#define ISTR_MIX_POPUP      "EDYCJA\0ZAWARTO\312\302\0KOPIUJ\0ZOBACZ\0USU\310\0KASUJ WSZYSTKO"
#define ISTR_MIXER          "MIXER"
// CHR_S S for Slow
#define ICHR_S              "S"
// CHR_D D for Delay
#define ICHR_D              "D"
// CHR_d d for differential
#define ICHR_d              "d"
#define ISTR_EXPO_DR        "EXPO/DR"
#define ISTR_4DR_MID        "\004DR Mid"
#define ISTR_4DR_LOW        "\004DR Low"
#define ISTR_4DR_HI         "\004DR Hi"
#define ISTR_2EXPO          "\002Expo"
#define ISTR_DR_SW1         "DrSw1"
#define ISTR_DR_SW2         "DrSw2"
#define ISTR_DUP_MODEL      "KOPIUJ MODEL"
#define ISTR_DELETE_MODEL   "USU808 MODEL"
#define ISTR_DUPLICATING    "Kopiowa\302 model"
#define ISTR_SETUP          "Ustawienia modelu"
#define ISTR_NAME           "Nazwa"
#define ISTR_VOICE_INDEX    "Dziw\304k\021MENU"
#define ISTR_TRIGGERA       "Trigger"
#define ISTR_TRIGGERB       "TriggerB"
//ISTR_COUNT_DOWN_UP indexed, 10 chars each
#define ISTR_COUNT_DOWN_UP  "\012Licz w d\311\305Licz w g\311\r\304"
#define ISTR_T_TRIM         "T-Trim"
#define ISTR_T_EXPO         "T-Expo-Dr"
#define ISTR_TRIM_INC       "Trim Inc""\037"ISTR_TRIM_SWITCH
// ISTR_TRIM_OPTIONS indexed 6 chars each
#define ISTR_TRIM_OPTIONS   FWx14"\004""\006Exp   PrecyzDok\305ad\311redniNiedok"
#define ISTR_TRIM_SWITCH    "Trim Sw"
#define ISTR_BEEP_CENTRE    "Sygna\305 Cnt"
#define ISTR_RETA123        "RETA1234"
#define ISTR_PROTO          "Proto"
// ISTR_21_USEC after \021 max 4 chars
#define ISTR_21_USEC        "\021uSec"
#define ISTR_13_RXNUM       "\014RxNum"
// ISTR_23_US after \023 max 2 chars
#define ISTR_23_US          "\023uS"
// ISTR_PPMFRAME_MSEC before \015 max 9 chars, after max 4 chars
#define ISTR_PPMFRAME_MSEC  " PPM FrLen\015mSec"
#define ISTR_SEND_RX_NUM    " Wy\312lij Rx Numer [MENU]"
#define ISTR_DSM_TYPE       " DSM Type"
#define ISTR_PPM_1ST_CHAN   " 1st Chan"
#define ISTR_SHIFT_SEL      " Polaryzacja"
// ISTR_POS_NEG indexed 3 chars each
#define ISTR_POS_NEG        "\003POSNEG"
#define ISTR_E_LIMITS       "E. Zakres"
#define ISTR_Trainer        "Trener"
#define ISTR_T2THTRIG       "T2ThTrig"
#define ISTR_AUTO_LIMITS    "Auto Zakres"
// ISTR_1_RETA indexed 1 char each
#define ISTR_1_RETA         "\001RETA"
#define ISTR_FL_MODE        "FL MODE"
#define ISTR_SWITCH         "Switch"
#define ISTR_TRIMS          "Trims"
#define ISTR_MODES          "MODES"
#define ISTR_SP_FM0         " FM0"
#define ISTR_SP_FM          " FM"
#define ISTR_HELI_SETUP     "HELI SETUP"
#define ISTR_HELI_TEXT			ISTR_SWASH_TYPE"\037"ISTR_COLLECTIVE"\037"ISTR_SWASH_RING"\037"ISTR_ELE_DIRECTION"\037"ISTR_AIL_DIRECTION"\037"ISTR_COL_DIRECTION
#define ISTR_SWASH_TYPE     "Swash Type"
#define ISTR_COLLECTIVE     "Collective"
#define ISTR_SWASH_RING     "Swash Ring"
#define ISTR_ELE_DIRECTION  "SW. Kierunek"
#define ISTR_AIL_DIRECTION  "LOT Kierunek"
#define ISTR_COL_DIRECTION  "COL Kierunek"
//#define ISTR_MODEL_POPUP    "WYBIERZ\0KOPIUJ\0ZOBACZ\0USU\310"
#define ISTR_MODEL_POPUP    "EDYTUJ\0WUBIERZ\0KOPIUJ\0ZOBACZ\0USU\310\0KOPIA\0PRZYWRO\303"
#define ISTR_MODELSEL       "Wyb\311r modelu"
// ISTR_11_FREE after \011 max 4 chars
#define ISTR_11_FREE        "\011free"
#define ISTR_CALIBRATION    "KALIBRACJA"
// ISTR_MENU_TO_START after \003 max 15 chars
#define ISTR_MENU_TO_START  "\003[MENU] -> START"
// ISTR_SET_MIDPOINT after \005 max 11 chars
#define ISTR_SET_MIDPOINT   "\005SET MIDPOINT"
// ISTR_MOVE_STICKS after \003 max 15 chars
#define ISTR_MOVE_STICKS    "\003MOVE STICKS/POTS"
#define ISTR_ANA            "DR\300"
#define ISTR_DIAG           "DIAG"
// ISTR_KEYNAMES indexed 5 chars each
#define ISTR_KEYNAMES       "\005 Menu Exit  D\311\305 G\311raPrawy Lewy"
#define ISTR_TRIM_M_P       "Trim- +"
// ISTR_OFF_PLUS_EQ indexed 3 chars each
#define ISTR_OFF_PLUS_EQ    "\003wy\305 += :="
// ISTR_CH1_4 indexed 3 chars each
#define ISTR_CH1_4          "\003ch1ch2ch3ch4"
#define ISTR_MULTIPLIER     "Multiplier"
#define ISTR_CAL            "Kal\304d."
#define ISTR_MODE_SRC_SW    "\003mode\012% src  sw"
#define ISTR_RADIO_SETUP    "USTAWIENIA RADIA"
#define ISTR_OWNER_NAME     "W\305a\312ciciel"
#define ISTR_BEEPER         "Sygna\305"
// ISTR_BEEP_MODES indexed 6 chars each
#define ISTR_BEEP_MODES     "\006Cicho ""Bez sg""b.kr\311t""kr\311tki""Normal""d\305ugi ""bd\305ugi"
#define ISTR_SOUND_MODE     "Rodzaj dziwi\304ku"
// ISTR_SPEAKER_OPTS indexed 10 chars each
#define ISTR_SPEAKER_OPTS   "\012Sygna\305    ""PiSpkr    ""BeeprVoice""PiSpkVoice""MegaSound "
#define ISTR_VOLUME         "G\305o\312no\312\302"
#define ISTR_SPEAKER_PITCH  "Wysoko\312\302 ton\311w"
#define ISTR_HAPTICSTRENGTH "Si\305a wibracji"
#define ISTR_CONTRAST       "Kontrast"
#define ISTR_BATT_WARN      "Alarm baterii" 
// ISTR_INACT_ALARM m for minutes after \023 - single char
#define ISTR_INACT_ALARM    "Alarm-brak aktyw. \023m"
#define ISTR_THR_REVERSE    "Gaz odwr\311\302"
#define ISTR_MINUTE_BEEP    "Sygna\305 co minut\304"
#define ISTR_BEEP_COUNTDOWN "Sygna\305 odliczania"
#define ISTR_FLASH_ON_BEEP  "B\305ysk na Sygna\305"
#define ISTR_LIGHT_SWITCH   "\313wiat\305o na prze\305."
#define ISTR_LIGHT_INVERT   "\313wiat\305o invert"
#define ISTR_LIGHT_AFTER    "\313wiat\305o na przyc."
#define ISTR_LIGHT_STICK    "\313wiat\305o na dr\300\314ek"
#define ISTR_SPLASH_SCREEN  "Ekran Startowy"
#define ISTR_SPLASH_NAME    "Nazwa Startowa"
#define ISTR_THR_WARNING    "Gaz Ostrze\314enie"
#define ISTR_DEAFULT_SW     "Default Sw"
#define ISTR_MEM_WARN       "Pami\304\303 Uwaga"
#define ISTR_ALARM_WARN     "Alarm Ostrze\314enie"
#define ISTR_POTSCROLL      "Przewijanie Potencj."
#define ISTR_STICKSCROLL    "Przewijanie Dz. Gazu"
#define ISTR_BANDGAP        "BandGap"
#define ISTR_ENABLE_PPMSIM  "Wy\305\300cz PPMSIM"
#define ISTR_CROSSTRIM      "CrossTrim"
#define ISTR_INT_FRSKY_ALRM "Int. Frsky alarm"
#define ISTR_MODE           "Mode"

// SWITCHES_STR 3 chars each
#if defined(PCBSKY) || defined(PCB9XT)
#define ISWITCHES_STR "\003GAZSK.SW.ID0ID1ID2LOTBIETRNL1 L2 L3 L4 L5 L6 L7 L8 L9 LA LB LC LD LE LF LG LH LI LJ LK LL LM LN LO onfTH\200TH-TH\201RU\200RU-RU\201EL\200EL-EL\201AI\200AI-AI\201GE\200GE-GE\2016P06P16P26P36P46P5PB1PB2"
//#define IHW_SWITCHES_STR     "\002SASBSCSDSESFSGSH6P"
#define IHW_SWITCHARROW_STR  "\200-\201"
#endif
#ifdef PCBX9D
#ifdef REV9E
#define ISWITCHES_STR				 "\003SF       SC\200SC-SC\201      SH L1 L2 L3 L4 L5 L6 L7 L8 L9 LA LB LC LD LE LF LG LH LI LJ LK LL LM LN LO onfSB\200SB-SB\201SE\200SE-SE\201SA\200SA-SA\201SD\200SD-SD\201SG\200SG-SG\2016P06P16P26P36P46P5"\
														 "SI\200SI-SI\201SJ\200SJ-SJ\201SK\200SK-SK\201SL\200SL-SL\201SM\200SM-SM\201SN\200SN-SN\201SO\200SO-SO\201SP\200SP-SP\201SQ\200SQ-SQ\201SR\200SR-SR\201"
#else
#define ISWITCHES_STR "\003SF       SC\200SC-SC\201      SH L1 L2 L3 L4 L5 L6 L7 L8 L9 LA LB LC LD LE LF LG LH LI LJ LK LL LM LN LO onfSB\200SB-SB\201SE\200SE-SE\201SA\200SA-SA\201SD\200SD-SD\201SG\200SG-SG\2016P06P16P26P36P46P5"
#endif	// REV9E

#ifdef REV9E
#define IHW_SWITCHES_STR     "\002SASBSCSDSESFSGSHSISJSKSLSMSNSOSPSQSR6PL1L2L3L4L5L6L7L8L9LALBLCLDLELFLGLHLILJLKLLLMLNLO"
#else
#define IHW_SWITCHES_STR     "\002SASBSCSDSESFSGSH6PL1L2L3L4L5L6L7L8L9LALBLCLDLELFLGLHLILJLKLLLMLNLO"
#endif	// REV9E
#define IHW_SWITCHARROW_STR "\200-\201"
#endif
#define ISWITCH_WARN_STR	   "UWAGA Wy\305\300czniki"
// CURV_STR indexed 3 chars each
// c17-c24 added for timer mode A display
#define ICURV_STR					 "\003---x>0x<0|x|f>0f<0|f|c1 c2 c3 c4 c5 c6 c7 c8 c9 c10c11c12c13c14c15c16c17c18c19c20c21c22c23c24"
// CSWITCH_STR indexed 7 chars each
#define ICSWITCH_STR        "\007----   v>val  v<val  |v|>val|v|<valAND    OR     XOR    ""v1==v2 ""v1!=v2 ""v1>v2  ""v1<v2  ""Latch  F-Flop TimeOffNtmeOff1-Shot 1-ShotRv\140=val"

#define ISWASH_TYPE_STR     FWx17"\004""\004----""120 ""120X""140 ""90  "

#define ISTR_STICK_NAMES    "\005SK. \0SW. \0GAZ \0LOT "

#define ISTR_STAT           "STAT"
#define ISTR_STAT2          "STAT2"
// ISTR_TRIM_OPTS indexed 3 chars each
#define ISTR_TRIM_OPTS      "\003ExpExFFneMedCrs"
#define ISTR_TTM            "TTm"
#define ISTR_FUEL           "Paliwo"
#define ISTR_12_RPM         "\012RPM"
#define ISTR_LAT_EQ         "Lat=""\037"ISTR_LON_EQ"\037"ISTR_ALT_MAX"\037"ISTR_SPD_KTS_MAX
#define ISTR_LON_EQ         "Lon="
#define ISTR_ALT_MAX        "Wys=\011m   Max="
#define ISTR_SPD_KTS_MAX    "Pr\304=\011kts Max="
#define ISTR_11_MPH         "\011mph"

#define ISTR_SINK_TONES	   "Sink Tones"


// ersky9x strings
#define ISTR_ST_CARD_STAT   "SD CARD STAT"
#define ISTR_4_READY        "\004Gotowy"
#define ISTR_NOT            "NIE"
#define ISTR_BOOT_REASON    "BOOT REASON"
#define ISTR_6_WATCHDOG     "\006WATCHDOG"
#define ISTR_5_UNEXPECTED   "\005UNEXPECTED"
#define ISTR_6_SHUTDOWN     "\006WY\306\301CZAM"
#define ISTR_6_POWER_ON     "\006W\306\301CZAM"
// ISTR_MONTHS indexed 3 chars each
#define ISTR_MONTHS         "\003XxxStyLutMarKwiMajCzeLipSieWrzPa\316LisGru"
#define ISTR_MENU_REFRESH   "[MENU] od\312wierz"
#define ISTR_DATE_TIME      "DATA-CZAS"
#define ISTR_SEC            "Sec."
#define ISTR_MIN_SET        "Min.\015Set"
#define ISTR_HOUR_MENU_LONG "Godz\015MENU"
#define ISTR_DATE           "Data"
#define ISTR_MONTH          "Mies."
#define ISTR_YEAR_TEMP      "Rok\013Temp."
#define ISTR_YEAR           "Rok"
#define ISTR_BATTERY        "BATERIA"
#define ISTR_Battery        "Bateria"
#define ISTR_CURRENT_MAX    "Krzywa\016Max"
#define ISTR_CPU_TEMP_MAX   "CPU temp.\014C Max\024C"
#define ISTR_MEMORY_STAT    "MEMORY STAT"
#define ISTR_GENERAL        "G\305\311wne"
#define ISTR_Model          "Model"
#define ISTR_RADIO_SETUP2   "USTAWIENIA 2"
#define ISTR_BRIGHTNESS     "Jasno\312\302"
#define ISTR_CAPACITY_ALARM "Alarm pojemno\312ci"
#define ISTR_BT_BAUDRATE    "Bt pr\304dko\312\302"
#define ISTR_ROTARY_DIVISOR "Rotary Divisor"
#define ISTR_STICK_LV_GAIN  "Stick LV Gain"
#define ISTR_STICK_LH_GAIN  "Stick LH Gain"
#define ISTR_STICK_RV_GAIN  "Stick RV Gain"
#define ISTR_STICK_RH_GAIN  "Stick RH Gain"
#define ISTR_BIND					  " Bind"
#define ISTR_RANGE					" Range Check"

#define ISTR_ALRMS_OFF			"Alarmy Wy\305\300czone"
#define ISTR_OLD_EEPROM			" Stara Wersja EEPROM   Sprawd\316 ustawienia"
#define ISTR_TRIGA_OPTS			"OFFON THsTH%"
#define ISTR_CHK_MIX_SRC		"CHECK MIX SOURCES"

#define ISTR_BT_TELEMETRY		"BT Telemetria"
#define ISTR_FRSKY_COM_PORT "FrSky Com Port"
#define ISTR_INVERT_COM1		"Invert COM 1"
#define ISTR_LOG_SWITCH			"Log Switch"
#define ISTR_LOG_RATE				"Log Rate"
#define ISTR_6_BINDING			"\006BINDING"
#define ISTR_RANGE_RSSI			"RANGE CHECK RSSI:"
#define ISTR_FAILSAFE				"FAILSAFE"
#define ISTR_VOLUME_CTRL		"G\305o\312no\312\302"
#define ISTR_PROT_OPT				"\005PPM  PXX  DSM2 MultiAssan"
#define ISTR_TYPE						" Typ"
#define ISTR_COUNTRY				" Kraj"
#define ISTR_SP_FAILSAFE		" Failsafe"
#define ISTR_PPM2_START			"PPM2 Start Kan"
#define ISTR_FOLLOW					"\313LED316"
#define ISTR_PPM2_CHANNELS	"PPM2 Kana\305y"
#define ISTR_FILTER_ADC			"Filter ADC"
#define ISTR_SCROLLING			"Przewijanie"
#define ISTR_ALERT_YEL			"Uwa\314aj [\315\311\305]"
#define ISTR_ALERT_ORG			"Uwa\314aj [Pom]"
#define ISTR_ALERT_RED			"Uwa\314aj [Cze]"
#define ISTR_LANGUAGE				"J\304zyk"

#define ISTR_RSSI_WARN		  "RSSI Uwaga"
#define ISTR_RSSI_CRITICAL  "RSSI Krytyczne"
#define ISTR_RX_VOLTAGE		  "Rx Napi\304cie"
#define ISTR_DSM_WARNING	  "DSM Uwaga"
#define ISTR_FADESLOSSHOLDS "\006fades lossesholds "
#define ISTR_DSM_CRITICAL	  "DSM Krytyczne"
#define ISTR_BT_TRAINER		  "BT jako trener"
#define ISTR_MULTI_TYPE     "Protok\311\305\037Typ \037Autobind\037Power"
#define ISTR_MULTI_OPTION   "\014Opcje "

#define ISTR_Display		     "Ekran" 
#define ISTR_AudioHaptic		 "Audio/Wibr" 
#define ISTR_Alarms			     "Alarmy" 
#define ISTR_General		     "G\305\311wne" 
#define ISTR_Controls			   "Kontrola"
#define ISTR_Hardware			   "Sprz\304t"
#define ISTR_Calibration		 "Kalibracja" 
//#define ISTR_Trainer		     "Trener" 
#define ISTR_Version		     "Wersja" 
#define ISTR_ModuleRssi			 "FrSky xSSI"
#define ISTR_DateTime			   "Data-Czas" 
#define ISTR_DiagSwtch		   "DiagPrze\305"  
#define ISTR_DiagAna		     "DiagDr\301\314k" 
#define ISTR_Eeprom			     "EEPROM" 

#define ISTR_Mixer		      "Mixer" 
#define ISTR_Cswitches		  "Prze\305 Log." 
#define ISTR_Telemetry		  "Telemetria" 
#define ISTR_limits			    "Zakresy" 
#define ISTR_Bluetooth		  "BlueTooth" 
#define ISTR_heli_setup			"Heli" 
#define ISTR_Curves			    "Krzywa" 
#define ISTR_Expo				    "Expo/Dr" 
#define ISTR_Globals		    "Globalne" 
#define ISTR_Timer		      "Stoper" 
#define ISTR_Modes			 		"Modes" 
#define ISTR_Voice		      "Dzwi\304k" 
#define ISTR_Protocol			  "Protok\311\305" 
#define ISTR_Safety					"Safety Sws"


//"Aktualne \317r\311d\305o"
//"\004----A1  A2  FASVSC1 SC2 SC3 SC4 SC5 SC6 SC7 SC8 "
//"SC  ="
//"\317r\311d\305o"
//"Multiplier"
//"Dzielnik"
//"Jednostka"
//"Sygn"
//"Dzie\312\304tne"
//"Offset At"
//"\005PierwszyOstatni "
//"G\305os Prze\805"
//"Funkcje"
//"\007----   v>val  v<val  |v|>val|v|<valW\306     WY\306    BOTH   "
//"PRZE\306\301CZNIK"
//"Rate"
//"\017Once"
//"Offset"
//"FileType"
//"\006  NazwaNumerWibr."
//"G\305os File"
//"\006Wibr.1Wibr.2Wibr.3"
// SKY "\003IDxGAZSK.SW.LOTBIETRN"
// X9D "\002SASBSCSDSESFSGSH"
//"\002MODES"
// SKY "\004sIDxsGAZsSK.sSW.sLOTsBIEsTRN"
// X9D "\002SASBSCSDSESFSGSH"
//"Kasuj Prze\305\300cznik"
// SKY "\003---P1 P2 P3 GV4GV5GV6GV7"
// X9D "\003---P1 P2 SL SR GV5GV6GV7"
//"Internal"
//"\003AmeJapEur"
//"Zewn\304trzny"
//"Fade In"
//"Fade Out"
//"Nazwa"
//"Co Proc"
//"W\805. Czas"
//"tstoper1        us"
//"\013rssi"
//"Vbat"
//"\013RxV"
//"AMP\013Temp"
//"RPM\021DSM2"
//"USTAWIENIA"
//"EKRAN"
//"AudioDrganie"
//"Alarmy"
//"G\305\311wne"
//"Kontrola"
//"Sprz\304t"
//"Kalibracja"
//"Trener"
//"Wersja"
//"Data-Czas"
//"DiagPrze\305"
//"DiagDr\300\314k"
//"EKRAN"
//"NIEBIESKI"
//"BIA\306Y"
//"Optrex EKRAN"
//"AUDIO/WIBRACJA"
//"ALARMY"
//"[Nast\304pny]"
//"G\305\311wne"
//"\012   ENGLISH  FRANCAIS   DEUTSCH NORWEGIAN   SWEDISH  ITALIAN   POLISH"
//"\005 NIE POT  STICKBOTH "
//"KONTROLA"
//"Sprz\304t"
//"SW Prze\300\300cznik"
//"\0042POS3POS6POS"
//"GAZ Prze\305\300cznik"
//"\0042POS3POS"
//"SK Prze\305\300cznik"
//"GAZ Prze\305\300cznik"
//"USTAWIENIA MODELI"
//"Mixer"
//"C.Prze\305\300czniki"
//"Telemtria"
//"Zakresy"
//"EKRAN"
//"MEKRAN"
//"\001Haptic Min Run"





