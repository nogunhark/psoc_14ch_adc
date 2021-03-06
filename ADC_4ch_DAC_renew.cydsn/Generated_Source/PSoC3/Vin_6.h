/*******************************************************************************
* File Name: Vin_6.h  
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

#if !defined(CY_PINS_Vin_6_H) /* Pins Vin_6_H */
#define CY_PINS_Vin_6_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Vin_6_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Vin_6_Write(uint8 value) ;
void    Vin_6_SetDriveMode(uint8 mode) ;
uint8   Vin_6_ReadDataReg(void) ;
uint8   Vin_6_Read(void) ;
uint8   Vin_6_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Vin_6_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Vin_6_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Vin_6_DM_RES_UP          PIN_DM_RES_UP
#define Vin_6_DM_RES_DWN         PIN_DM_RES_DWN
#define Vin_6_DM_OD_LO           PIN_DM_OD_LO
#define Vin_6_DM_OD_HI           PIN_DM_OD_HI
#define Vin_6_DM_STRONG          PIN_DM_STRONG
#define Vin_6_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Vin_6_MASK               Vin_6__MASK
#define Vin_6_SHIFT              Vin_6__SHIFT
#define Vin_6_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Vin_6_PS                     (* (reg8 *) Vin_6__PS)
/* Data Register */
#define Vin_6_DR                     (* (reg8 *) Vin_6__DR)
/* Port Number */
#define Vin_6_PRT_NUM                (* (reg8 *) Vin_6__PRT) 
/* Connect to Analog Globals */                                                  
#define Vin_6_AG                     (* (reg8 *) Vin_6__AG)                       
/* Analog MUX bux enable */
#define Vin_6_AMUX                   (* (reg8 *) Vin_6__AMUX) 
/* Bidirectional Enable */                                                        
#define Vin_6_BIE                    (* (reg8 *) Vin_6__BIE)
/* Bit-mask for Aliased Register Access */
#define Vin_6_BIT_MASK               (* (reg8 *) Vin_6__BIT_MASK)
/* Bypass Enable */
#define Vin_6_BYP                    (* (reg8 *) Vin_6__BYP)
/* Port wide control signals */                                                   
#define Vin_6_CTL                    (* (reg8 *) Vin_6__CTL)
/* Drive Modes */
#define Vin_6_DM0                    (* (reg8 *) Vin_6__DM0) 
#define Vin_6_DM1                    (* (reg8 *) Vin_6__DM1)
#define Vin_6_DM2                    (* (reg8 *) Vin_6__DM2) 
/* Input Buffer Disable Override */
#define Vin_6_INP_DIS                (* (reg8 *) Vin_6__INP_DIS)
/* LCD Common or Segment Drive */
#define Vin_6_LCD_COM_SEG            (* (reg8 *) Vin_6__LCD_COM_SEG)
/* Enable Segment LCD */
#define Vin_6_LCD_EN                 (* (reg8 *) Vin_6__LCD_EN)
/* Slew Rate Control */
#define Vin_6_SLW                    (* (reg8 *) Vin_6__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Vin_6_PRTDSI__CAPS_SEL       (* (reg8 *) Vin_6__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Vin_6_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Vin_6__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Vin_6_PRTDSI__OE_SEL0        (* (reg8 *) Vin_6__PRTDSI__OE_SEL0) 
#define Vin_6_PRTDSI__OE_SEL1        (* (reg8 *) Vin_6__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Vin_6_PRTDSI__OUT_SEL0       (* (reg8 *) Vin_6__PRTDSI__OUT_SEL0) 
#define Vin_6_PRTDSI__OUT_SEL1       (* (reg8 *) Vin_6__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Vin_6_PRTDSI__SYNC_OUT       (* (reg8 *) Vin_6__PRTDSI__SYNC_OUT) 


#if defined(Vin_6__INTSTAT)  /* Interrupt Registers */

    #define Vin_6_INTSTAT                (* (reg8 *) Vin_6__INTSTAT)
    #define Vin_6_SNAP                   (* (reg8 *) Vin_6__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins Vin_6_H */


/* [] END OF FILE */
