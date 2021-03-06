/* ========================================
 *
 * ADAU1452Registers.h
 *
 * Author:     Lukas Creutzburg
 * Created on: 16.05.16
 * Version:    1.0
 * 
* Copyright:
* Released under Creative Commons Attribution Share-Alike 4.0 license.This 
* allows for both personal and commercial derivative works, as long as they 
* credit freeDSP and release their designs under the same license. The freeDSP 
* brand and freeDSP logo are protected by copyright and cannot be used without 
* formal permission. Please contact Sebastian Merchel for further information.
* https://creativecommons.org/licenses/by-sa/4.0/legalcode
 *
 * ========================================
*/

#define PROGRAM_RAM_SIZE 1292
#define DM0_RAM_SIZE 412
#define DM1_RAM_SIZE 36

#define CHIPADDRESS 0x00
#define WRITE_DSP 0x00
#define READ_DSP 0x01

/* init sequence registers */
/* all control registers are 16bit registers */
#define DUMMY_REGISTER      0x4FFF
#define SOFT_RESET          0xF890
#define HYPERNATE           0xF400
#define KILL_CORE           0xF403
#define PLL_CTRL_0          0xF000
#define PLL_CTRL_1          0xF001
#define PLL_CLK_SRC         0xF002
#define MCLK_OUT            0xF005
#define PLL_ENABLE          0xF003
#define POWER_ENABLE0       0xF050
#define POWER_ENABLE1       0xF051
#define PROGRAM_RAM_DATA    0xC000  //Data from Sigma Studio
#define DM0_RAM_DATA        0x0000  //Data from Sigma Studio
#define DM1_RAM_DATA        0x613C  //Data from Sigma Studio !!datasheet: 0x6000
#define START_ADDRESS       0xF404
#define START_PULSE         0xF401
#define START_CORE          0xF402
#define SERIAL_OUTPUT       0xF180
#define SERIAL_OUTPUT_END   0xF197

/* SDATA Registers */
#define SDATA_IN_1          0xF204
#define SLEWADDRESS         0x0027

/* [] END OF FILE */
