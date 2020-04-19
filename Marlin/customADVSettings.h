#ifndef CUSTOM_ADV_SETTINGS_H
#define CUSTOM_ADV_SETTINGS_H

/**
 * Custom ADVi3pp by Hayden Donald settings file
 * 
 * (1.) Comment out define to disable feature
**/

// Other settings //
#define CUSTOM_START_PAGE (Page::Main)      //This will disable the bootscreen and goto a first page (1.)
#define BOOT_TEXT   "We are ready to go!"   //What text should be displayed by default (1.)
#define ENABLE_TIME_REPLACEMENT             //This will replace the fan speed and Z position with time elapsed and left values


// Probe settings //
#define PROBE_ENABLED               //Is there a probe? (1.)

#ifdef PROBE_ENABLED
    #define FAST_PROBE_DIVIDER 4    //Divide the home speed to get fast probe speed
    #define SLOW_PROBE_DIVIDER 10    //Divide the home speed to get slow probe speed
    #define MULTIPLE_PROBING 4      //How many probes should we do? (1.)
    #define PROBE_MAX_POINTS 3      //How many xy points should be tested
    //#define Z_SAFE_HOMING        //Should the probe head to the centre of the bed to probe (1.)
    #ifdef Z_SAFE_HOMING
        #define Z_SAFE_HOMING_X_POINT ((X_BED_SIZE) / 2)        //X Point where to safe probe
        #define Z_SAFE_HOMING_Y_POINT ((Y_BED_SIZE) / 2)        //Y Point where to safe probe
    #endif

    #define ADJUST_Z_READINGS       //Enable the Z auto leveling manual adjustment
    #ifdef ADJUST_Z_READINGS
        /**
         * Adjust the Z readings manually. This will add or subtract the
         * value(s) below from each reading taken from the probe
         * 
         * This MUST be equal to the PROBE_MAX_POINTS x PROBE_MAX_POINTS above default is 3x3
        **/

        #define Z_ADJUSTMENT_VALUES \
        {\
            {-0.1, -0.2, -0.45}, \
            {-0.2, -0.35, -0.65}, \ 
            {0, -0.2, -0.45}  \
        }
    #endif
#endif

// Filament runout settings //
//#define FILAMENT_RUNOUT_SENSOR
#define FIL_RUNOUT1_PIN 0

#endif



