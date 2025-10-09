# Levels54

![levels54](https://i.imgur.com/<todo>.png)

Levels54 is a hotswappable, dual trackball, 54 switch split keyboard with VIK extensibility made by Good Great Grand Wonderful. https://ergokeyboards.com/levels54

## Building ZMK for Levels54

### Standard Build

```
west build -p -d build/levels54 --board levels54
```

### Flashing

`west` can be used to flash the board directly. Press the reset button once, and run:

```
west flash -d build/levels54
```
