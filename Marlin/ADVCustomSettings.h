/*
Settings file for modifications to the ADVi3pp firmware
*/

//Start the printer at a different page? Comment to disable
#define CUSTOM_START_PAGE (Page::Main)

//Custom boot text. Comment to disable
#define BOOT_TEXT   "We are ready to go!"

//Adjust auto level Z values for error in the printer. Comment to disable
#define ADJUST_AUTOLEVEL_FOR_SCEW

//Enable replacing of the Z and fan values on the LCD with the time elapsed and time left
#define ENABLE_TIME_REPLACEMENT

//These values will adjust the read points. 
//If the sensor reads 0.2 and the value below is -0.4 the final offset will be -0.2

/*
To determine these values for your printer start by auto leveling and setting the z height.
Then set the nozzle to Z0 and move the nozzle to each probing point and adjust the height up and down from the reading 
*/
#define Z_ADJUSTMENT_VALUES \
    {\
        {0, 0, 0}, \
        {0, 0, 0}, \ 
        {0, 0, 0}  \
    }