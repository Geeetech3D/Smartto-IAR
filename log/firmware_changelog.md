# Firmwares

## A30

### Latest Version

#### A30_V1.37.58(Stable, 3D Touch Enabled)

##### Hash(MD5)
**A30_M_LCD_V1_37.bin**: `FDF16B6AE8A2EE8DC4D52A735CC060B8` \
**A30_VD_S_V1_58.bin**: `FEAC6B4DAC9C3FA47B5FF448D53E8833`

###### New features
1. Add 3D Touch interface recognition in auto leveling function to complete backward compatibility with the old version one that only supports the capacitive proximity sensor
2. Repair printer restarting caused by consecutively receiving null characters on the motherboard serial port

#### A30_V1.36.57(Stable, 3D Touch Disabled)

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
7. Fixed Automatic Leveling
8. Fixed the stucking in powered on/printing;
9. Fixed the abnormal operation caused by the exception threw by printing-continuously checking during printing;
10. Handled the exceptions threw by Material Detection
11. Fixed the scraping occured in the homing process
12. Modified the framework code to increase stability of processing
13. Fixed bugs in legacy code

### Legacy Version

#### A30_V1.35.56(Stable)

##### Hash(MD5)
**A30_APP_S_V1.35.56.bin**: `9e61b5b77a02ee5dd4698edc841b34a0` \
**A30_APP_M_V1.35.56.bin**: `922d3a3317d9b26d3ee145753ff2c6fd`

## E180

### Latest Version

#### E180_V1.33.42

##### New features
Support command M2202(get parameters of feedrate/acceleration/jerk)

##### Bug fixes
Fixed machine auto-reset when printing though sd card

### Legacy Version

#### E180_V1.32.41

##### Hash(MD5)
**E180_APP_S_V1.32.41.bin**: `c815f85f17e40b4e23d69e0205341a6c` \
**E180_APP_M_V1.32.41.bin**: `703a08af1da9a25b9232c5c33ad1e250`
