/*******************************************************************************
* File Name: Vin_9.h  
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

#if !defined(CY_PINS_Vin_9_H) /* Pins Vin_9_H */
#define CY_PINS_Vin_9_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Vin_9_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Vin_9_Write(uint8 value) ;
void    Vin_9_SetDriveMode(uint8 mode) ;
uint8   Vin_9_ReadDataReg(void) ;
uint8   Vin_9_Read(void) ;
uint8   Vin_9_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Vin_9_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Vin_9_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Vin_9_DM_RES_UP          PIN_DM_RES_UP
#define Vin_9_DM_RES_DWN         PIN_DM_RES_DWN
#define Vin_9_DM_OD_LO           PIN_DM_OD_LO
#define Vin_9_DM_OD_HI           PIN_DM_OD_HI
#define Vin_9_DM_STRONG          PIN_DM_STRONG
#define Vin_9_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Vin_9_MASK               Vin_9__MASK
#define Vin_9_SHIFT              Vin_9__SHIFT
#define Vin_9_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Vin_9_PS                     (* (reg8 *) Vin_9__PS)
/* Data Register */
#define Vin_9_DR                     (* (reg8 *) Vin_9__DR)
/* Port Number */
#define Vin_9_PRT_NUM                (* (reg8 *) Vin_9__PRT) 
/* Connect to Analog Globals */                                                  
#define Vin_9_AG                     (* (reg8 *) Vin_9__AG)                       
/* Analog MUX bux enable */
#define Vin_9_AMUX                   (* (reg8 *) Vin_9__AMUX) 
/* Bidirectional Enable */                                                        
#define Vin_9_BIE                    (* (reg8 *) Vin_9__BIE)
/* Bit-mask for Aliased Register Access */
#define Vin_9_BIT_MASK               (* (reg8 *) Vin_9__BIT_MASK)
/* Bypass Enable */
#define Vin_9_BYP                    (* (reg8 *) Vin_9__BYP)
/* Port wide control signals */                                                   
#define Vin_9_CTL                    (* (reg8 *) Vin_9__CTL)
/* Drive Modes */
#define Vin_9_DM0                    (* (reg8 *) Vin_9__DM0) 
#define Vin_9_DM1                    (* (reg8 *) Vin_9__DM1)
#define Vin_9_DM2                    (* (reg8 *) Vin_9__DM2) 
/* Input Buffer Disable Override */
#define Vin_9_INP_DIS                (* (reg8 *) Vin_9__INP_DIS)
/* LCD Common or Segment Drive */
#define Vin_9_LCD_COM_SEG            (* (reg8 *) Vin_9__LCD_COM_SEG)
/* Enable Segment LCD */
#define Vin_9_LCD_EN                 (* (reg8 *) Vin_9__LCD_EN)
/* Slew Rate Control */
#define Vin_9_SLW                    (* (reg8 *) Vin_9__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Vin_9_PRTDSI__CAPS_SEL       (* (reg8 *) Vin_9__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Vin_9_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Vin_9__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Vin_9_PRTDSI__OE_SEL0        (* (reg8 *) Vin_9__PRTDSI__OE_SEL0) 
#define Vin_9_PRTDSI__OE_SEL1        (* (reg8 *) Vin_9__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Vin_9_PRTDSI__OUT_SEL0       (* (reg8 *) Vin_9__PRTDSI__OUT_SEL0) 
#define Vin_9_PRTDSI__OUT_SEL1       (* (reg8 *) Vin_9__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Vin_9_PRTDSI__SYNC_OUT       (* (reg8 *) Vin_9__PRTDSI__SYNC_OUT) 


#if defined(Vin_9__INTSTAT)  /* Interrupt Registers */

    #define Vin_9_INTSTAT                (* (reg8 *) Vin_9__INTSTAT)
    #define Vin_9_SNAP                   (* (reg8 *) Vin_9__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins Vin_9_H */


/* [] END OF FILE */
