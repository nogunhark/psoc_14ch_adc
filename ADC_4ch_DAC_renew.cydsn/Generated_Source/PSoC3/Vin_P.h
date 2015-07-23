/*******************************************************************************
* File Name: Vin_P.h  
* Version 2.0
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

#if !defined(CY_PINS_Vin_P_H) /* Pins Vin_P_H */
#define CY_PINS_Vin_P_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Vin_P_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Vin_P_Write(uint8 value) ;
void    Vin_P_SetDriveMode(uint8 mode) ;
uint8   Vin_P_ReadDataReg(void) ;
uint8   Vin_P_Read(void) ;
uint8   Vin_P_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Vin_P_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Vin_P_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Vin_P_DM_RES_UP          PIN_DM_RES_UP
#define Vin_P_DM_RES_DWN         PIN_DM_RES_DWN
#define Vin_P_DM_OD_LO           PIN_DM_OD_LO
#define Vin_P_DM_OD_HI           PIN_DM_OD_HI
#define Vin_P_DM_STRONG          PIN_DM_STRONG
#define Vin_P_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Vin_P_MASK               Vin_P__MASK
#define Vin_P_SHIFT              Vin_P__SHIFT
#define Vin_P_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Vin_P_PS                     (* (reg8 *) Vin_P__PS)
/* Data Register */
#define Vin_P_DR                     (* (reg8 *) Vin_P__DR)
/* Port Number */
#define Vin_P_PRT_NUM                (* (reg8 *) Vin_P__PRT) 
/* Connect to Analog Globals */                                                  
#define Vin_P_AG                     (* (reg8 *) Vin_P__AG)                       
/* Analog MUX bux enable */
#define Vin_P_AMUX                   (* (reg8 *) Vin_P__AMUX) 
/* Bidirectional Enable */                                                        
#define Vin_P_BIE                    (* (reg8 *) Vin_P__BIE)
/* Bit-mask for Aliased Register Access */
#define Vin_P_BIT_MASK               (* (reg8 *) Vin_P__BIT_MASK)
/* Bypass Enable */
#define Vin_P_BYP                    (* (reg8 *) Vin_P__BYP)
/* Port wide control signals */                                                   
#define Vin_P_CTL                    (* (reg8 *) Vin_P__CTL)
/* Drive Modes */
#define Vin_P_DM0                    (* (reg8 *) Vin_P__DM0) 
#define Vin_P_DM1                    (* (reg8 *) Vin_P__DM1)
#define Vin_P_DM2                    (* (reg8 *) Vin_P__DM2) 
/* Input Buffer Disable Override */
#define Vin_P_INP_DIS                (* (reg8 *) Vin_P__INP_DIS)
/* LCD Common or Segment Drive */
#define Vin_P_LCD_COM_SEG            (* (reg8 *) Vin_P__LCD_COM_SEG)
/* Enable Segment LCD */
#define Vin_P_LCD_EN                 (* (reg8 *) Vin_P__LCD_EN)
/* Slew Rate Control */
#define Vin_P_SLW                    (* (reg8 *) Vin_P__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Vin_P_PRTDSI__CAPS_SEL       (* (reg8 *) Vin_P__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Vin_P_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Vin_P__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Vin_P_PRTDSI__OE_SEL0        (* (reg8 *) Vin_P__PRTDSI__OE_SEL0) 
#define Vin_P_PRTDSI__OE_SEL1        (* (reg8 *) Vin_P__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Vin_P_PRTDSI__OUT_SEL0       (* (reg8 *) Vin_P__PRTDSI__OUT_SEL0) 
#define Vin_P_PRTDSI__OUT_SEL1       (* (reg8 *) Vin_P__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Vin_P_PRTDSI__SYNC_OUT       (* (reg8 *) Vin_P__PRTDSI__SYNC_OUT) 


#if defined(Vin_P__INTSTAT)  /* Interrupt Registers */

    #define Vin_P_INTSTAT                (* (reg8 *) Vin_P__INTSTAT)
    #define Vin_P_SNAP                   (* (reg8 *) Vin_P__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins Vin_P_H */


/* [] END OF FILE */
