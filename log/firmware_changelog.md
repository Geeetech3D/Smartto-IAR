# Firmwares

## A30

### Stable Version

#### A30_V1.35.56

##### Hash(MD5)
**A30_APP_S_V1.35.56.bin**: `9e61b5b77a02ee5dd4698edc841b34a0` \
**A30_APP_M_V1.35.56.bin**: `922d3a3317d9b26d3ee145753ff2c6fd`

### Latest Version

#### A30_V1.36.57

##### Hash(MD5)
**A30_M_LCD_V1_36.bin**: `D785EA0FA3F29FEDC3069ED5BCF9D700` \
**A30_S_VD_V1_57.bin**: `D6A374860AB240AF01101FBB69828B70`

##### New features
1. Add control interface to A30 series new motherboard (GTM_PRO_VD, hardware version number > 3.1), and backward compatible with A30 old version (GTM32_MINI_S)
2. Add upgrading error handling mechanism

##### Bug fixes
1. Fixed forced pause during printing when Z hop > 0.5mm (the Z hop limit is changed to < 5mm)
2. Fixed printer unable to connect to Cura
3. Fixed unstable printing through serial port in S3D
4. Fixed printer repeated restart caused by the serial port module
5. Fixed slowly response from screen (Optimize and rectify the communication protocol between the motherboard and the LCD Display)
6. Fixed interface operation problems (Such as no response from half LCD screen)
4. Fixed Automatic Leveling
5. Fixed the stucking in powered on/printing;
7. Fixed the abnormal operation caused by the exception threw by printing-continuously checking during printing;
8. Handled the exceptions threw by Material Detection
9. Fixed the scraping occured in the homing process
10. Modified the framework code to increase stability of processing
11. Fixed bugs in legacy code

### Legacy Version

#### A30_V1.39.62

##### New features
Support command M500 to store user settings(set by M201/M203...)

##### Bug fixes
1. Fixed axis moving error when turn on/off autoleveling
2. Fixed wrong screen display when operating the filament detective switch
3. Fixed machine auto-reset when printing though sd card

#### A30_V1.38.61

##### New features
1. Added PID setup command(M301 & M304)
2. Added printing parameter setup command(M201/M203/M204/M205)

##### Bug fixes
Fixed auto leveling re-printing problems

#### A30_V1.37.60

##### New features
Made automatic leveling compatible with 3D Touch and Capacitor proximity switch

##### Bug fixes
1. Fixed display format about time/coordinate/axis
2. Changed the maximum value of printing rate from 200 to 999
3. It will not display the total layer count when the printer can not get the data.(instead of showing 0)
4. Fixed some problems about automatic leveling and continuation

## E180

### Stable Version

#### E180_V1.32.41

##### Hash(MD5)
**E180_APP_S_V1.32.41.bin**: `c815f85f17e40b4e23d69e0205341a6c` \
**E180_APP_M_V1.32.41.bin**: `703a08af1da9a25b9232c5c33ad1e250`

### Latest Version

#### E180_V1.33.42

##### New features
Support command M2202(get parameters of feedrate/acceleration/jerk)

##### Bug fixes
Fixed machine auto-reset when printing though sd card