
#include <stdint.h>
#include "SparkFun_SCD4x_Arduino_Library.h"


#ifdef __cplusplus
extern "C" {
#endif

    SCD4x *mgos_scd4x_create();
    int mgos_scd4x_begin(SCD4x *scd);
    int mgos_scd4x_startperiodicmeasurement(SCD4x *scd);
    int mgos_scd4x_readmeasurement(SCD4x *scd);
    double mgos_scd4x_get_temperature(SCD4x *scd);
    double mgos_scd4x_get_humidity(SCD4x *scd);
    uint16_t mgos_scd4x_get_co2(SCD4x *scd);


#ifdef __cplusplus
}
#endif

//bool: begin, startPeriodicMeasurement, readMeasurement
//double: getHumidity, getTemperature
//int: getCO2 