#ifndef CUSTOM_ADV_SETTINGS_H
#define CUSTOM_ADV_SETTINGS_H

/**
 * Custom ADVi3pp by Hayden Donald settings file
 * 
 * (1.) Comment out define to disable feature
**/

// Other settings //
#define BOOTSCREEN_ENABLED //Still needs implementing

// Probe settings //
#define PROBE_ENABLED               //Is there a probe? (1.)

#ifdef PROBE_ENABLED
    #define FAST_PROBE_DIVIDER 4    //Divide the home speed to get fast probe speed
    #define SLOW_PROBE_DIVIDER 8    //Divide the home speed to get slow probe speed
    #define PROBE_COUNT 3           //How many probes should we do? (1.)
    #define PROBE_MAX_POINTS 3      //How many xy points should be tested
    //#define Z_SAFE_HOMING        //Should the probe head to the centre of the bed to probe (1.)
    #ifdef Z_SAFE_HOMING
        #define Z_SAFE_HOMING_X_POINT ((X_BED_SIZE) / 2)        //X Point where to safe probe
        #define Z_SAFE_HOMING_Y_POINT ((Y_BED_SIZE) / 2)        //Y Point where to safe probe
    #endif
#endif

// Filament runout settings //
//#define FILAMENT_RUNOUT_SENSOR
#define FIL_RUNOUT1_PIN 0

#endif



