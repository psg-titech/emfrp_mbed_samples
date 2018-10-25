# LCDClock

A simple digital clock (a sample application included in Emfrp distribution)  
Originally developed by [Kensuke Sawada](https://github.com/sawaken)

## To run

Connect your mbed via USB and do the following.

```Bash
make
make install
```

## Functions
* Center (push) button (of joystick) toggles on-off of time-set mode.
* Right button moves cursor of time-set targets (hour, minute and second).
* Up button raises time-set target's value (+1) if time-set mode is on.

## IO library
Following libraries are required.
* Basic IO library `mbed` (official)
* LCD's manipulation library `C12832_lcd` (third-party)

## Requirements

* [Emfrp](https://github.com/psg-titech/emfrp)
* [mbed-cli](https://github.com/ARMmbed/mbed-cli)
* [C12832_lcd](https://os.mbed.com/users/dreschpe/code/C12832_lcd)
