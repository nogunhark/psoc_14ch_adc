/*******************************************************************************
* File Name: Vin_5.c  
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
#include "Vin_5.h"


/*******************************************************************************
* Function Name: Vin_5_Write
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
void Vin_5_Write(uint8 value) 
{
    uint8 staticBits = (Vin_5_DR & (uint8)(~Vin_5_MASK));
    Vin_5_DR = staticBits | ((uint8)(value << Vin_5_SHIFT) & Vin_5_MASK);
}


/*******************************************************************************
* Function Name: Vin_5_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to one of the following drive modes.
*
*  Vin_5_DM_STRONG     Strong Drive 
*  Vin_5_DM_OD_HI      Open Drain, Drives High 
*  Vin_5_DM_OD_LO      Open Drain, Drives Low 
*  Vin_5_DM_RES_UP     Resistive Pull Up 
*  Vin_5_DM_RES_DWN    Resistive Pull Down 
*  Vin_5_DM_RES_UPDWN  Resistive Pull Up/Down 
*  Vin_5_DM_DIG_HIZ    High Impedance Digital 
*  Vin_5_DM_ALG_HIZ    High Impedance Analog 
*
* Return: 
*  None
*
*******************************************************************************/
void Vin_5_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(Vin_5_0, mode);
}


/*******************************************************************************
* Function Name: Vin_5_Read
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
*  Macro Vin_5_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 Vin_5_Read(void) 
{
    return (Vin_5_PS & Vin_5_MASK) >> Vin_5_SHIFT;
}


/*******************************************************************************
* Function Name: Vin_5_ReadDataReg
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
uint8 Vin_5_ReadDataReg(void) 
{
    return (Vin_5_DR & Vin_5_MASK) >> Vin_5_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(Vin_5_INTSTAT) 

    /*******************************************************************************
    * Function Name: Vin_5_ClearInterrupt
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
    uint8 Vin_5_ClearInterrupt(void) 
    {
        return (Vin_5_INTSTAT & Vin_5_MASK) >> Vin_5_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 


/* [] END OF FILE */
