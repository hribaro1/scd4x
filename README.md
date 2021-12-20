# SCD4x I2C Driver

A Mongoose library for Sensirion's SCD4x integrated circuit.

## Sensor details


## Example application

An example program using a timer to read data from the sensor every 5 seconds:

```
load('api_timer.js');
load('api_i2c.js');
load('api_scd4x.js');

let scd = SCD4x.create();
scd.begin();

//scd.startPeriodicMeasurement();
let scdGetData = function () {
    print('SCD41:  CO2: ', scd.getCO2() ,'ppm  T: ', scd.getTemperature() ,'C     RH: ', scd.getHumidity(), '%');
};
let scdTimer = Timer.set(10000 /* milliseconds */, true /* repeat */, scdGetData, null);

# Disclaimer

This project is not an official Google project. It is not supported by Google
and Google specifically disclaims all warranties as to its quality,
merchantability, or fitness for a particular purpose.
