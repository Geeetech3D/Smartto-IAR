# Firmwares

## A30

### Stable Version

#### A30_V1.35.56

##### Hash(MD5)
**A30_APP_S_V1.35.56.bin**: `9e61b5b77a02ee5dd4698edc841b34a0` \
**A30_APP_M_V1.35.56.bin**: `922d3a3317d9b26d3ee145753ff2c6fd`

### Latest Version(not test)

#### A30_V1.39.62

##### New features
Support command M500 to store user settings(set by M201/M203...)

##### Bug fixes
1. Fixed axis moving error when turn on/off autoleveling
2. Fixed wrong screen display when operating the filament detective switch
3. Fixed machine auto-reset when printing though sd card

### Legacy Version

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