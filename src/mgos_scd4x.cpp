#include "mgos_scd4x.h"
//#include "SparkFun_SCD4x_Arduino_Library.h"

//bool: begin, startPeriodicMeasurement, readMeasurement
//double: getHumidity, getTemperature
//int: getCO2 



// Create an SCD4x instance
SCD4x *mgos_scd4x_create() {
    return new SCD4x();
};

int mgos_scd4x_begin(SCD4x *scd)
{
    if (scd == nullptr) 
        return -1;
    return scd->begin();
}

int mgos_scd4x_startperiodicmeasurement(SCD4x *scd)
{
    if (scd == nullptr) 
        return -1;
    return scd->startPeriodicMeasurement();
}

int mgos_scd4x_readmeasurement(SCD4x *scd)
{
    if (scd == nullptr) 
        return -1;
    return scd->readMeasurement();
}

// Get temperature (centigrade)
double mgos_scd4x_get_temperature(SCD4x *scd)
{
    if (scd == nullptr)
        return -1;
    return scd->getTemperature();
}

// Get humidity (0.0-1.0)
double mgos_scd4x_get_humidity(SCD4x *scd)
{
    if (scd == nullptr)
        return -1;
    return scd->getHumidity();
}

// Get CO2 (ppm)
uint16_t mgos_scd4x_get_co2(SCD4x *scd)
{
    if (scd == nullptr)
        return -1;
    return scd->getCO2();
}
// test