/* ========================================
* File Name: capsense.h
*
* Version: 1
* Author: Lukas Creutzburg
*
*  Description:
*  CapSense module
*
* ===========================================================================================================
*/
#ifndef __capsense_H
#define __capsense_H
	
#include <project.h>

/* CapSense Slider resoluton is set to 127 (7 bits).
*  Since PWM has 16 bit resolution, slider position value should be shifted left
*  by 9 bits.
*/
#define SLIDER_POS_TO_COMPARE_SHIFT    (9u)


/*******************************************************************************
* Function Name:  CapSenseInit
********************************************************************************
*
* Summary:
*   Initializes CapSense  
*
* Parameters:  
*  None
*
* Return: 
*  None 
*  
*******************************************************************************/
void CapSenseInit(void);


/*******************************************************************************
* Function Name: CapSense_DisplayState
********************************************************************************
*
* Summary:
*  Get current CapSense State
*
* Parameters:  
*   None
* Return: 
*   uint32: Position on slider
*
*******************************************************************************/
int16 CapSense_DisplayState(void);


/*******************************************************************************
* Function Name: CapSense_Refresh
********************************************************************************
*
* Summary:
*  Refresh CapSense
*
* Parameters:  
*   None
* Return: 
*   uint32: Position on slider
*
*******************************************************************************/
int32 CapSense_Refresh(void);

/*******************************************************************************
* Function Name: CapSense_ButtonX
********************************************************************************
*
* Summary:
*  Interaktion if ButtonX pressed
*
* Parameters:  
*   None
* Return: 
*   None
*
*******************************************************************************/
void CapSense_Button0(void);
void CapSense_Button1(void);
void CapSense_Button2(void);

#endif

//[] END OF FILE