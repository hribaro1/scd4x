let SCD4x = {
//bool: begin, startPeriodicMeasurement, readMeasurement
//double: getHumidity, getTemperature
//int: getCO2 
    _create: ffi('void *mgos_scd4x_create()'),
    _begin: ffi('int mgos_scd4x_begin(void *)'),
    _stpm: ffi('int mgos_scd4x_startperiodicmeasurement(void *)'),
    _rdpm: ffi('int mgos_scd4x_readmeasurement(void *)'),
    _gtco2: ffi('int mgos_scd4x_get_co2(void *)'),
    _gtTp: ffi('double mgos_scd4x_get_temperature(void *)'),
    _gtHm: ffi('double mgos_scd4x_get_humidity(void *)'),
    
    
    create: function () {
        let obj = Object.create(SCD4x._proto);
        obj.scd = SCD4x._create();
        return obj;
    }, 

    _proto: {

        // Public functions
        begin: function () {
            return SCD4x._begin(this.scd);
        },

        startPeriodicMeasurement: function () {
            return SCD4x._stpm(this.scd);
        },

        readMeasurement: function () {
            return SCD4x._rdpm(this.scd);
        },

        getCO2: function () {
            return SCD4x._gtco2(this.scd);
        },

        getTemperature: function () {
            return SCD4x._gtTp(this.scd);
        },

        getHumidity: function () {
            return SCD4x._gtHm(this.scd);
        }
    },
};