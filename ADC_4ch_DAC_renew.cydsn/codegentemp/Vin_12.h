/*******************************************************************************
* File Name: Vin_12.h  
* Version 2.5
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Vin_12_H) /* Pins Vin_12_H */
#define CY_PINS_Vin_12_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Vin_12_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Vin_12_Write(uint8 value) ;
void    Vin_12_SetDriveMode(uint8 mode) ;
uint8   Vin_12_ReadDataReg(void) ;
uint8   Vin_12_Read(void) ;
uint8   Vin_12_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Vin_12_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Vin_12_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Vin_12_DM_RES_UP          PIN_DM_RES_UP
#define Vin_12_DM_RES_DWN         PIN_DM_RES_DWN
#define Vin_12_DM_OD_LO           PIN_DM_OD_LO
#define Vin_12_DM_OD_HI           PIN_DM_OD_HI
#define Vin_12_DM_STRONG          PIN_DM_STRONG
#define Vin_12_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Vin_12_MASK               Vin_12__MASK
#define Vin_12_SHIFT              Vin_12__SHIFT
#define Vin_12_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Vin_12_PS                     (* (reg8 *) Vin_12__PS)
/* Data Register */
#define Vin_12_DR                     (* (reg8 *) Vin_12__DR)
/* Port Number */
#define Vin_12_PRT_NUM                (* (reg8 *) Vin_12__PRT) 
/* Connect to Analog Globals */                                                  
#define Vin_12_AG                     (* (reg8 *) Vin_12__AG)                       
/* Analog MUX bux enable */
#define Vin_12_AMUX                   (* (reg8 *) Vin_12__AMUX) 
/* Bidirectional Enable */                                                        
#define Vin_12_BIE                    (* (reg8 *) Vin_12__BIE)
/* Bit-mask for Aliased Register Access */
#define Vin_12_BIT_MASK               (* (reg8 *) Vin_12__BIT_MASK)
/* Bypass Enable */
#define Vin_12_BYP                    (* (reg8 *) Vin_12__BYP)
/* Port wide control signals */                                                   
#define Vin_12_CTL                    (* (reg8 *) Vin_12__CTL)
/* Drive Modes */
#define Vin_12_DM0                    (* (reg8 *) Vin_12__DM0) 
#define Vin_12_DM1                    (* (reg8 *) Vin_12__DM1)
#define Vin_12_DM2                    (* (reg8 *) Vin_12__DM2) 
/* Input Buffer Disable Override */
#define Vin_12_INP_DIS                (* (reg8 *) Vin_12__INP_DIS)
/* LCD Common or Segment Drive */
#define Vin_12_LCD_COM_SEG            (* (reg8 *) Vin_12__LCD_COM_SEG)
/* Enable Segment LCD */
#define Vin_12_LCD_EN                 (* (reg8 *) Vin_12__LCD_EN)
/* Slew Rate Control */
#define Vin_12_SLW                    (* (reg8 *) Vin_12__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Vin_12_PRTDSI__CAPS_SEL       (* (reg8 *) Vin_12__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Vin_12_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Vin_12__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Vin_12_PRTDSI__OE_SEL0        (* (reg8 *) Vin_12__PRTDSI__OE_SEL0) 
#define Vin_12_PRTDSI__OE_SEL1        (* (reg8 *) Vin_12__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Vin_12_PRTDSI__OUT_SEL0       (* (reg8 *) Vin_12__PRTDSI__OUT_SEL0) 
#define Vin_12_PRTDSI__OUT_SEL1       (* (reg8 *) Vin_12__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Vin_12_PRTDSI__SYNC_OUT       (* (reg8 *) Vin_12__PRTDSI__SYNC_OUT) 


#if defined(Vin_12__INTSTAT)  /* Interrupt Registers */

    #define Vin_12_INTSTAT                (* (reg8 *) Vin_12__INTSTAT)
    #define Vin_12_SNAP                   (* (reg8 *) Vin_12__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins Vin_12_H */


/* [] END OF FILE */
