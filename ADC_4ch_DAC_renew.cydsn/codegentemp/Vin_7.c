/*******************************************************************************
* File Name: Vin_7.c  
* Version 2.5
*
* Description:
*  This file contains API to enable firmware control of a Pins component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "Vin_7.h"


/*******************************************************************************
* Function Name: Vin_7_Write
********************************************************************************
*
* Summary:
*  Assign a new value to the digital port's data output register.  
*
* Parameters:  
*  prtValue:  The value to be assigned to the Digital Port. 
*
* Return: 
*  None 
*  
*******************************************************************************/
void Vin_7_Write(uint8 value) 
{
    uint8 staticBits = (Vin_7_DR & (uint8)(~Vin_7_MASK));
    Vin_7_DR = staticBits | ((uint8)(value << Vin_7_SHIFT) & Vin_7_MASK);
}


/*******************************************************************************
* Function Name: Vin_7_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to one of the following drive modes.
*
*  Vin_7_DM_STRONG     Strong Drive 
*  Vin_7_DM_OD_HI      Open Drain, Drives High 
*  Vin_7_DM_OD_LO      Open Drain, Drives Low 
*  Vin_7_DM_RES_UP     Resistive Pull Up 
*  Vin_7_DM_RES_DWN    Resistive Pull Down 
*  Vin_7_DM_RES_UPDWN  Resistive Pull Up/Down 
*  Vin_7_DM_DIG_HIZ    High Impedance Digital 
*  Vin_7_DM_ALG_HIZ    High Impedance Analog 
*
* Return: 
*  None
*
*******************************************************************************/
void Vin_7_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(Vin_7_0, mode);
}


/*******************************************************************************
* Function Name: Vin_7_Read
********************************************************************************
*
* Summary:
*  Read the current value on the pins of the Digital Port in right justified 
*  form.
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value of the Digital Port as a right justified number
*  
* Note:
*  Macro Vin_7_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 Vin_7_Read(void) 
{
    return (Vin_7_PS & Vin_7_MASK) >> Vin_7_SHIFT;
}


/*******************************************************************************
* Function Name: Vin_7_ReadDataReg
********************************************************************************
*
* Summary:
*  Read the current value assigned to a Digital Port's data output register
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value assigned to the Digital Port's data output register
*  
*******************************************************************************/
uint8 Vin_7_ReadDataReg(void) 
{
    return (Vin_7_DR & Vin_7_MASK) >> Vin_7_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(Vin_7_INTSTAT) 

    /*******************************************************************************
    * Function Name: Vin_7_ClearInterrupt
    ********************************************************************************
    *
    * Summary:
    *  Clears any active interrupts attached to port and returns the value of the 
    *  interrupt status register.
    *
    * Parameters:  
    *  None 
    *
    * Return: 
    *  Returns the value of the interrupt status register
    *  
    *******************************************************************************/
    uint8 Vin_7_ClearInterrupt(void) 
    {
        return (Vin_7_INTSTAT & Vin_7_MASK) >> Vin_7_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 


/* [] END OF FILE */
