/*******************************************************************************
* File Name: Vin_N.c  
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
#include "Vin_N.h"


/*******************************************************************************
* Function Name: Vin_N_Write
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
void Vin_N_Write(uint8 value) 
{
    uint8 staticBits = (Vin_N_DR & (uint8)(~Vin_N_MASK));
    Vin_N_DR = staticBits | ((uint8)(value << Vin_N_SHIFT) & Vin_N_MASK);
}


/*******************************************************************************
* Function Name: Vin_N_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to one of the following drive modes.
*
*  Vin_N_DM_STRONG     Strong Drive 
*  Vin_N_DM_OD_HI      Open Drain, Drives High 
*  Vin_N_DM_OD_LO      Open Drain, Drives Low 
*  Vin_N_DM_RES_UP     Resistive Pull Up 
*  Vin_N_DM_RES_DWN    Resistive Pull Down 
*  Vin_N_DM_RES_UPDWN  Resistive Pull Up/Down 
*  Vin_N_DM_DIG_HIZ    High Impedance Digital 
*  Vin_N_DM_ALG_HIZ    High Impedance Analog 
*
* Return: 
*  None
*
*******************************************************************************/
void Vin_N_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(Vin_N_0, mode);
}


/*******************************************************************************
* Function Name: Vin_N_Read
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
*  Macro Vin_N_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 Vin_N_Read(void) 
{
    return (Vin_N_PS & Vin_N_MASK) >> Vin_N_SHIFT;
}


/*******************************************************************************
* Function Name: Vin_N_ReadDataReg
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
uint8 Vin_N_ReadDataReg(void) 
{
    return (Vin_N_DR & Vin_N_MASK) >> Vin_N_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(Vin_N_INTSTAT) 

    /*******************************************************************************
    * Function Name: Vin_N_ClearInterrupt
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
    uint8 Vin_N_ClearInterrupt(void) 
    {
        return (Vin_N_INTSTAT & Vin_N_MASK) >> Vin_N_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 


/* [] END OF FILE */
