/*
Settings file for modifications to the ADVi3pp firmware
*/

//Start the printer at a different page? Comment to disable
#define CUSTOM_START_PAGE (Page::Main)

//Custom boot text. Comment to disable
#define BOOT_TEXT   "3D Printer"

//Adjust auto level Z values for error in the printer. Comment to disable
#define ADJUST_AUTOLEVEL_FOR_SCEW

//Enable replacing of the Z and fan values on the LCD with the time elapsed and time left
#define ENABLE_TIME_REPLACEMENT

//Disable the lower temperature limits (This is useful for cold start situations like me as my printer lives in the shed)
#define FIX_LOW_END_TEMP

//These values will adjust the read points. 
//If the sensor reads 0.2 and the value below is -0.4 the final offset will be -0.2

/*
To determine these values for your printer start by auto leveling and setting the z height.
Then set the nozzle to Z0 and move the nozzle to each probing point and adjust the height up and down from the reading 
Finally perform another auto level to set the values with offsets and repeat till the error is solved!

A -'ve reading will lower the nozzle by x mm

* Auto level the bed and set z height
* Home with G28
* Do a G29 to auto level
* Disable software endstops with M211 S0

Move to the following and move z up and down and use a peice of paper to get the right height and note down the z value
* G1 X40 Y40 Z0 F5000
* G1 X100 Y40 Z0 F5000
* G1 X180 Y40 Z0 F5000

* G1 X40 Y100 Z0 F5000
* G1 X100 Y100 Z0 F5000 (Should be 0 as this is the reference point)
* G1 X180 Y100 Z0 F5000

* G1 X40 Y180 Z0 F5000
* G1 X100 Y180 Z0 F5000
* G1 X180 Y180 Z0 F5000

Lastly go though each point once uploaded and double check the height is correct. (Making sure auto leving is enabled!)

*/


#define Z_ADJUSTMENT_VALUES \
    {\
        {0, 0, 0}, \
        {0, 0, 0}, \ 
        {0, 0, 0}  \
    }

//My printer settings
// #define Z_ADJUSTMENT_VALUES \
//     {\
//         {0.03, 0.05, 0.07}, \
//         {-0.1, 0, 0.05}, \ 
//         {-0.1, 0, 0.05}  \
//     }