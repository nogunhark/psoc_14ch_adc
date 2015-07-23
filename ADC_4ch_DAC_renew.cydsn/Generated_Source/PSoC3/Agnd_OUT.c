/*******************************************************************************
* File Name: Agnd_OUT.c  
* Version 2.0
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
#include "Agnd_OUT.h"


/*******************************************************************************
* Function Name: Agnd_OUT_Write
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
void Agnd_OUT_Write(uint8 value) 
{
    uint8 staticBits = (Agnd_OUT_DR & (uint8)(~Agnd_OUT_MASK));
    Agnd_OUT_DR = staticBits | ((uint8)(value << Agnd_OUT_SHIFT) & Agnd_OUT_MASK);
}


/*******************************************************************************
* Function Name: Agnd_OUT_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to one of the following drive modes.
*
*  Agnd_OUT_DM_STRONG     Strong Drive 
*  Agnd_OUT_DM_OD_HI      Open Drain, Drives High 
*  Agnd_OUT_DM_OD_LO      Open Drain, Drives Low 
*  Agnd_OUT_DM_RES_UP     Resistive Pull Up 
*  Agnd_OUT_DM_RES_DWN    Resistive Pull Down 
*  Agnd_OUT_DM_RES_UPDWN  Resistive Pull Up/Down 
*  Agnd_OUT_DM_DIG_HIZ    High Impedance Digital 
*  Agnd_OUT_DM_ALG_HIZ    High Impedance Analog 
*
* Return: 
*  None
*
*******************************************************************************/
void Agnd_OUT_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(Agnd_OUT_0, mode);
}


/*******************************************************************************
* Function Name: Agnd_OUT_Read
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
*  Macro Agnd_OUT_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 Agnd_OUT_Read(void) 
{
    return (Agnd_OUT_PS & Agnd_OUT_MASK) >> Agnd_OUT_SHIFT;
}


/*******************************************************************************
* Function Name: Agnd_OUT_ReadDataReg
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
uint8 Agnd_OUT_ReadDataReg(void) 
{
    return (Agnd_OUT_DR & Agnd_OUT_MASK) >> Agnd_OUT_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(Agnd_OUT_INTSTAT) 

    /*******************************************************************************
    * Function Name: Agnd_OUT_ClearInterrupt
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
    uint8 Agnd_OUT_ClearInterrupt(void) 
    {
        return (Agnd_OUT_INTSTAT & Agnd_OUT_MASK) >> Agnd_OUT_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 


/* [] END OF FILE */
