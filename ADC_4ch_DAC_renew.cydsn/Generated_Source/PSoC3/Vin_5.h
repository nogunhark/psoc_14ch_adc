/*******************************************************************************
* File Name: Vin_5.h  
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

#if !defined(CY_PINS_Vin_5_H) /* Pins Vin_5_H */
#define CY_PINS_Vin_5_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Vin_5_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Vin_5_Write(uint8 value) ;
void    Vin_5_SetDriveMode(uint8 mode) ;
uint8   Vin_5_ReadDataReg(void) ;
uint8   Vin_5_Read(void) ;
uint8   Vin_5_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Vin_5_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Vin_5_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Vin_5_DM_RES_UP          PIN_DM_RES_UP
#define Vin_5_DM_RES_DWN         PIN_DM_RES_DWN
#define Vin_5_DM_OD_LO           PIN_DM_OD_LO
#define Vin_5_DM_OD_HI           PIN_DM_OD_HI
#define Vin_5_DM_STRONG          PIN_DM_STRONG
#define Vin_5_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Vin_5_MASK               Vin_5__MASK
#define Vin_5_SHIFT              Vin_5__SHIFT
#define Vin_5_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Vin_5_PS                     (* (reg8 *) Vin_5__PS)
/* Data Register */
#define Vin_5_DR                     (* (reg8 *) Vin_5__DR)
/* Port Number */
#define Vin_5_PRT_NUM                (* (reg8 *) Vin_5__PRT) 
/* Connect to Analog Globals */                                                  
#define Vin_5_AG                     (* (reg8 *) Vin_5__AG)                       
/* Analog MUX bux enable */
#define Vin_5_AMUX                   (* (reg8 *) Vin_5__AMUX) 
/* Bidirectional Enable */                                                        
#define Vin_5_BIE                    (* (reg8 *) Vin_5__BIE)
/* Bit-mask for Aliased Register Access */
#define Vin_5_BIT_MASK               (* (reg8 *) Vin_5__BIT_MASK)
/* Bypass Enable */
#define Vin_5_BYP                    (* (reg8 *) Vin_5__BYP)
/* Port wide control signals */                                                   
#define Vin_5_CTL                    (* (reg8 *) Vin_5__CTL)
/* Drive Modes */
#define Vin_5_DM0                    (* (reg8 *) Vin_5__DM0) 
#define Vin_5_DM1                    (* (reg8 *) Vin_5__DM1)
#define Vin_5_DM2                    (* (reg8 *) Vin_5__DM2) 
/* Input Buffer Disable Override */
#define Vin_5_INP_DIS                (* (reg8 *) Vin_5__INP_DIS)
/* LCD Common or Segment Drive */
#define Vin_5_LCD_COM_SEG            (* (reg8 *) Vin_5__LCD_COM_SEG)
/* Enable Segment LCD */
#define Vin_5_LCD_EN                 (* (reg8 *) Vin_5__LCD_EN)
/* Slew Rate Control */
#define Vin_5_SLW                    (* (reg8 *) Vin_5__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Vin_5_PRTDSI__CAPS_SEL       (* (reg8 *) Vin_5__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Vin_5_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Vin_5__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Vin_5_PRTDSI__OE_SEL0        (* (reg8 *) Vin_5__PRTDSI__OE_SEL0) 
#define Vin_5_PRTDSI__OE_SEL1        (* (reg8 *) Vin_5__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Vin_5_PRTDSI__OUT_SEL0       (* (reg8 *) Vin_5__PRTDSI__OUT_SEL0) 
#define Vin_5_PRTDSI__OUT_SEL1       (* (reg8 *) Vin_5__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Vin_5_PRTDSI__SYNC_OUT       (* (reg8 *) Vin_5__PRTDSI__SYNC_OUT) 


#if defined(Vin_5__INTSTAT)  /* Interrupt Registers */

    #define Vin_5_INTSTAT                (* (reg8 *) Vin_5__INTSTAT)
    #define Vin_5_SNAP                   (* (reg8 *) Vin_5__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins Vin_5_H */


/* [] END OF FILE */
