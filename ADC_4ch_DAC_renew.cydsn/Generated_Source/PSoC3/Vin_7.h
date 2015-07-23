/*******************************************************************************
* File Name: Vin_7.h  
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

#if !defined(CY_PINS_Vin_7_H) /* Pins Vin_7_H */
#define CY_PINS_Vin_7_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Vin_7_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Vin_7_Write(uint8 value) ;
void    Vin_7_SetDriveMode(uint8 mode) ;
uint8   Vin_7_ReadDataReg(void) ;
uint8   Vin_7_Read(void) ;
uint8   Vin_7_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Vin_7_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Vin_7_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Vin_7_DM_RES_UP          PIN_DM_RES_UP
#define Vin_7_DM_RES_DWN         PIN_DM_RES_DWN
#define Vin_7_DM_OD_LO           PIN_DM_OD_LO
#define Vin_7_DM_OD_HI           PIN_DM_OD_HI
#define Vin_7_DM_STRONG          PIN_DM_STRONG
#define Vin_7_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Vin_7_MASK               Vin_7__MASK
#define Vin_7_SHIFT              Vin_7__SHIFT
#define Vin_7_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Vin_7_PS                     (* (reg8 *) Vin_7__PS)
/* Data Register */
#define Vin_7_DR                     (* (reg8 *) Vin_7__DR)
/* Port Number */
#define Vin_7_PRT_NUM                (* (reg8 *) Vin_7__PRT) 
/* Connect to Analog Globals */                                                  
#define Vin_7_AG                     (* (reg8 *) Vin_7__AG)                       
/* Analog MUX bux enable */
#define Vin_7_AMUX                   (* (reg8 *) Vin_7__AMUX) 
/* Bidirectional Enable */                                                        
#define Vin_7_BIE                    (* (reg8 *) Vin_7__BIE)
/* Bit-mask for Aliased Register Access */
#define Vin_7_BIT_MASK               (* (reg8 *) Vin_7__BIT_MASK)
/* Bypass Enable */
#define Vin_7_BYP                    (* (reg8 *) Vin_7__BYP)
/* Port wide control signals */                                                   
#define Vin_7_CTL                    (* (reg8 *) Vin_7__CTL)
/* Drive Modes */
#define Vin_7_DM0                    (* (reg8 *) Vin_7__DM0) 
#define Vin_7_DM1                    (* (reg8 *) Vin_7__DM1)
#define Vin_7_DM2                    (* (reg8 *) Vin_7__DM2) 
/* Input Buffer Disable Override */
#define Vin_7_INP_DIS                (* (reg8 *) Vin_7__INP_DIS)
/* LCD Common or Segment Drive */
#define Vin_7_LCD_COM_SEG            (* (reg8 *) Vin_7__LCD_COM_SEG)
/* Enable Segment LCD */
#define Vin_7_LCD_EN                 (* (reg8 *) Vin_7__LCD_EN)
/* Slew Rate Control */
#define Vin_7_SLW                    (* (reg8 *) Vin_7__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Vin_7_PRTDSI__CAPS_SEL       (* (reg8 *) Vin_7__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Vin_7_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Vin_7__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Vin_7_PRTDSI__OE_SEL0        (* (reg8 *) Vin_7__PRTDSI__OE_SEL0) 
#define Vin_7_PRTDSI__OE_SEL1        (* (reg8 *) Vin_7__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Vin_7_PRTDSI__OUT_SEL0       (* (reg8 *) Vin_7__PRTDSI__OUT_SEL0) 
#define Vin_7_PRTDSI__OUT_SEL1       (* (reg8 *) Vin_7__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Vin_7_PRTDSI__SYNC_OUT       (* (reg8 *) Vin_7__PRTDSI__SYNC_OUT) 


#if defined(Vin_7__INTSTAT)  /* Interrupt Registers */

    #define Vin_7_INTSTAT                (* (reg8 *) Vin_7__INTSTAT)
    #define Vin_7_SNAP                   (* (reg8 *) Vin_7__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins Vin_7_H */


/* [] END OF FILE */
