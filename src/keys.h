#ifndef __TIMEBOXED_KEYS_
#define __TIMEBOXED_KEYS_

#define KEY_TEMP 0
#define KEY_MAX 1
#define KEY_MIN 2
#define KEY_WEATHER 3
#define KEY_ENABLEHEALTH 4
#define KEY_USEKM 5
#define KEY_SHOWSLEEP 6
#define KEY_ENABLEWEATHER 7
#define KEY_WEATHERKEY 8
#define KEY_USECELSIUS 9
#define KEY_TIMEZONES 10
#define KEY_BGCOLOR 11
#define KEY_HOURSCOLOR 12
#define KEY_ENABLEADVANCED 13
#define KEY_DATECOLOR 14
#define KEY_ALTHOURSCOLOR 15
#define KEY_BATTERYCOLOR 16
#define KEY_BATTERYLOWCOLOR 17
#define KEY_WEATHERCOLOR 18
#define KEY_TEMPCOLOR 19
#define KEY_MINCOLOR 20
#define KEY_MAXCOLOR 21
#define KEY_STEPSCOLOR 22
#define KEY_DISTCOLOR 23
#define KEY_TIMEZONESCODE 24
#define KEY_TIMEZONESMINUTES 25
#define KEY_FONTTYPE 26
#define KEY_STEPS 27
#define KEY_DIST 28
#define KEY_BLUETOOTHDISCONNECT 29
#define KEY_BLUETOOTHCOLOR 30
#define KEY_OVERRIDELOCATION 31
#define KEY_ERROR 32
#define KEY_UPDATE 33
#define KEY_UPDATECOLOR 34
#define KEY_HASUPDATE 35
#define KEY_LOCALE 36
#define KEY_DATEFORMAT 37
#define KEY_TEXTALIGN 38
#define KEY_STEPSBEHINDCOLOR 39
#define KEY_DISTBEHINDCOLOR 40
#define KEY_SLEEP 41
#define KEY_DEEP 42
#define KEY_WEATHERPROVIDER 43
#define KEY_YAHOOKEY 44
#define KEY_CONFIGS 45
#define KEY_LEADINGZERO 46
#define KEY_USECAL 47
#define KEY_SIMPLEMODE 48
#define KEY_SLOTA 49
#define KEY_SLOTB 50
#define KEY_SLOTC 51
#define KEY_SLOTD 52
#define KEY_SLEEPSLOTA 53
#define KEY_SLEEPSLOTB 54
#define KEY_SLEEPSLOTC 55
#define KEY_SLEEPSLOTD 56
#define KEY_CAL 57
#define KEY_FEELS 58
#define KEY_SPEED 59
#define KEY_DIRECTION 60
#define KEY_WINDDIRCOLOR 61
#define KEY_WINDSPEEDCOLOR 62
#define KEY_CALCOLOR 63
#define KEY_CALBEHINDCOLOR 64
#define KEY_SPEEDUNIT 65
#define KEY_SLEEPCOLOR 66
#define KEY_SLEEPBEHINDCOLOR 67
#define KEY_DEEPCOLOR 68
#define KEY_DEEPBEHINDCOLOR 69
#define KEY_QUICKVIEW 70
#define KEY_DATESEPARATOR 71
#define KEY_SUNRISE 72
#define KEY_SUNSET 73
#define KEY_SUNRISECOLOR 74
#define KEY_SUNSETCOLOR 75
#define KEY_ACTIVECOLOR 76
#define KEY_ACTIVEBEHINDCOLOR 77
#define KEY_ACTIVE 78
#define KEY_TAPSLOTA 79
#define KEY_TAPSLOTB 80
#define KEY_TAPSLOTC 81
#define KEY_TAPSLOTD 82
#define KEY_TAPTIME 83
#define KEY_SHOWTAP 84
#define KEY_HEART 85
#define KEY_HEARTCOLOR 86
#define KEY_HEARTCOLOROFF 87
#define KEY_WEATHERTIME 88
#define KEY_HEARTLOW 89
#define KEY_HEARTHIGH 90
#define KEY_COMPASSCOLOR 91
#define KEY_WRISTSLOTA 92
#define KEY_WRISTSLOTB 93
#define KEY_WRISTSLOTC 94
#define KEY_WRISTSLOTD 95
#define KEY_SHOWWRIST 96

#define FLAG_WEATHER 0x0001
#define FLAG_HEALTH 0x0002
#define FLAG_KM 0x0004
#define FLAG_SLEEP 0x0008
#define FLAG_CELSIUS 0x0010
#define FLAG_ADVANCED 0x0020
#define FLAG_BLUETOOTH 0x0040
#define FLAG_UPDATE 0x0080
#define FLAG_LEADINGZERO 0x0100
#define FLAG_CALORIES 0x0200
#define FLAG_SIMPLEMODE 0x0400
#define FLAG_TIMEZONES 0x0800
#define FLAG_QUICKVIEW 0x1000
#define FLAG_TAP 0x2000
#define FLAG_WRIST 0x4000

#define BLOCKO_FONT 0
#define BLOCKO_BIG_FONT 1
#define SYSTEM_FONT 2
#define ARCHIVO_FONT 3
#define DIN_FONT 4
#define PROTOTYPE_FONT 5
#define LECO_FONT 6
#define KONSTRUCT_FONT 7

#define ALIGN_LEFT 0
#define ALIGN_CENTER 1
#define ALIGN_RIGHT 2

#define LC_ENGLISH 0
#define LC_PORTUGUESE 1
#define LC_FRENCH 2
#define LC_GERMAN 3
#define LC_SPANISH 4
#define LC_ITALIAN 5
#define LC_DUTCH 6
#define LC_DANISH 7
#define LC_TURKISH 8
#define LC_CZECH 9
#define LC_POLISH 10
#define LC_SWEDISH 11
#define LC_FINNISH 12
#define LC_SLOVAK 13

#define FORMAT_WMD 0
#define FORMAT_WDM 1
#define FORMAT_WD 2
#define FORMAT_DM 3
#define FORMAT_MD 4
#define FORMAT_DSM 5
#define FORMAT_SMD 6
#define FORMAT_WDSM 7
#define FORMAT_WSMD 8
#define FORMAT_ISO 9
#define FORMAT_WNDSM 10
#define FORMAT_WNSMD 11

#define SLOT_A 0
#define SLOT_B 1
#define SLOT_C 2
#define SLOT_D 3

#define MODULE_NONE -1
#define MODULE_WEATHER 1
#define MODULE_FORECAST 2
#define MODULE_STEPS 3
#define MODULE_DIST 4
#define MODULE_CAL 5
#define MODULE_SLEEP 6
#define MODULE_DEEP 7
#define MODULE_WIND 8
#define MODULE_FEELS 9
#define MODULE_WEATHER_FEELS 10
#define MODULE_SUNRISE 11
#define MODULE_SUNSET 12
#define MODULE_ACTIVE 13
#define MODULE_HEART 14
#define MODULE_COMPASS 15

#define MODE_NORMAL 0
#define MODE_SIMPLE 1

#define STATE_NORMAL 0
#define STATE_SLEEP 1
#define STATE_TAP 2
#define STATE_WRIST 3

#define WEATHER_ITEM 0
#define TEMP_ITEM 1
#define TEMPMIN_ITEM 2
#define TEMPMAX_ITEM 3
#define STEPS_ITEM 4
#define DIST_ITEM 5
#define CAL_ITEM 6
#define SLEEP_ITEM 7
#define DEEP_ITEM 8
#define SPEED_ITEM 9
#define DIRECTION_ITEM 10
#define WIND_UNIT_ITEM 11
#define TEMPMINICON_ITEM 12
#define TEMPMAXICON_ITEM 13
#define SUNRISE_ITEM 14
#define SUNSET_ITEM 15
#define SUNRISEICON_ITEM 16
#define SUNSETICON_ITEM 17
#define ACTIVE_ITEM 18
#define HEART_ITEM 19
#define HEARTICON_ITEM 20
#define DEGREES_ITEM 21
#define COMPASS_ITEM 22

#define UNIT_MPH 0
#define UNIT_KPH 1
#define UNIT_KNOTS 2

#endif
