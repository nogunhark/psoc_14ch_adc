/*******************************************************************************
* File Name: Vin_N.h  
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

#if !defined(CY_PINS_Vin_N_H) /* Pins Vin_N_H */
#define CY_PINS_Vin_N_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Vin_N_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Vin_N_Write(uint8 value) ;
void    Vin_N_SetDriveMode(uint8 mode) ;
uint8   Vin_N_ReadDataReg(void) ;
uint8   Vin_N_Read(void) ;
uint8   Vin_N_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Vin_N_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Vin_N_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Vin_N_DM_RES_UP          PIN_DM_RES_UP
#define Vin_N_DM_RES_DWN         PIN_DM_RES_DWN
#define Vin_N_DM_OD_LO           PIN_DM_OD_LO
#define Vin_N_DM_OD_HI           PIN_DM_OD_HI
#define Vin_N_DM_STRONG          PIN_DM_STRONG
#define Vin_N_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Vin_N_MASK               Vin_N__MASK
#define Vin_N_SHIFT              Vin_N__SHIFT
#define Vin_N_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Vin_N_PS                     (* (reg8 *) Vin_N__PS)
/* Data Register */
#define Vin_N_DR                     (* (reg8 *) Vin_N__DR)
/* Port Number */
#define Vin_N_PRT_NUM                (* (reg8 *) Vin_N__PRT) 
/* Connect to Analog Globals */                                                  
#define Vin_N_AG                     (* (reg8 *) Vin_N__AG)                       
/* Analog MUX bux enable */
#define Vin_N_AMUX                   (* (reg8 *) Vin_N__AMUX) 
/* Bidirectional Enable */                                                        
#define Vin_N_BIE                    (* (reg8 *) Vin_N__BIE)
/* Bit-mask for Aliased Register Access */
#define Vin_N_BIT_MASK               (* (reg8 *) Vin_N__BIT_MASK)
/* Bypass Enable */
#define Vin_N_BYP                    (* (reg8 *) Vin_N__BYP)
/* Port wide control signals */                                                   
#define Vin_N_CTL                    (* (reg8 *) Vin_N__CTL)
/* Drive Modes */
#define Vin_N_DM0                    (* (reg8 *) Vin_N__DM0) 
#define Vin_N_DM1                    (* (reg8 *) Vin_N__DM1)
#define Vin_N_DM2                    (* (reg8 *) Vin_N__DM2) 
/* Input Buffer Disable Override */
#define Vin_N_INP_DIS                (* (reg8 *) Vin_N__INP_DIS)
/* LCD Common or Segment Drive */
#define Vin_N_LCD_COM_SEG            (* (reg8 *) Vin_N__LCD_COM_SEG)
/* Enable Segment LCD */
#define Vin_N_LCD_EN                 (* (reg8 *) Vin_N__LCD_EN)
/* Slew Rate Control */
#define Vin_N_SLW                    (* (reg8 *) Vin_N__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Vin_N_PRTDSI__CAPS_SEL       (* (reg8 *) Vin_N__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Vin_N_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Vin_N__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Vin_N_PRTDSI__OE_SEL0        (* (reg8 *) Vin_N__PRTDSI__OE_SEL0) 
#define Vin_N_PRTDSI__OE_SEL1        (* (reg8 *) Vin_N__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Vin_N_PRTDSI__OUT_SEL0       (* (reg8 *) Vin_N__PRTDSI__OUT_SEL0) 
#define Vin_N_PRTDSI__OUT_SEL1       (* (reg8 *) Vin_N__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Vin_N_PRTDSI__SYNC_OUT       (* (reg8 *) Vin_N__PRTDSI__SYNC_OUT) 


#if defined(Vin_N__INTSTAT)  /* Interrupt Registers */

    #define Vin_N_INTSTAT                (* (reg8 *) Vin_N__INTSTAT)
    #define Vin_N_SNAP                   (* (reg8 *) Vin_N__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins Vin_N_H */


/* [] END OF FILE */
