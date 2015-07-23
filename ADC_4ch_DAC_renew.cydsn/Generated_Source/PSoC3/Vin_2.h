/*******************************************************************************
* File Name: Vin_2.h  
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

#if !defined(CY_PINS_Vin_2_H) /* Pins Vin_2_H */
#define CY_PINS_Vin_2_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Vin_2_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Vin_2_Write(uint8 value) ;
void    Vin_2_SetDriveMode(uint8 mode) ;
uint8   Vin_2_ReadDataReg(void) ;
uint8   Vin_2_Read(void) ;
uint8   Vin_2_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Vin_2_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Vin_2_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Vin_2_DM_RES_UP          PIN_DM_RES_UP
#define Vin_2_DM_RES_DWN         PIN_DM_RES_DWN
#define Vin_2_DM_OD_LO           PIN_DM_OD_LO
#define Vin_2_DM_OD_HI           PIN_DM_OD_HI
#define Vin_2_DM_STRONG          PIN_DM_STRONG
#define Vin_2_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Vin_2_MASK               Vin_2__MASK
#define Vin_2_SHIFT              Vin_2__SHIFT
#define Vin_2_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Vin_2_PS                     (* (reg8 *) Vin_2__PS)
/* Data Register */
#define Vin_2_DR                     (* (reg8 *) Vin_2__DR)
/* Port Number */
#define Vin_2_PRT_NUM                (* (reg8 *) Vin_2__PRT) 
/* Connect to Analog Globals */                                                  
#define Vin_2_AG                     (* (reg8 *) Vin_2__AG)                       
/* Analog MUX bux enable */
#define Vin_2_AMUX                   (* (reg8 *) Vin_2__AMUX) 
/* Bidirectional Enable */                                                        
#define Vin_2_BIE                    (* (reg8 *) Vin_2__BIE)
/* Bit-mask for Aliased Register Access */
#define Vin_2_BIT_MASK               (* (reg8 *) Vin_2__BIT_MASK)
/* Bypass Enable */
#define Vin_2_BYP                    (* (reg8 *) Vin_2__BYP)
/* Port wide control signals */                                                   
#define Vin_2_CTL                    (* (reg8 *) Vin_2__CTL)
/* Drive Modes */
#define Vin_2_DM0                    (* (reg8 *) Vin_2__DM0) 
#define Vin_2_DM1                    (* (reg8 *) Vin_2__DM1)
#define Vin_2_DM2                    (* (reg8 *) Vin_2__DM2) 
/* Input Buffer Disable Override */
#define Vin_2_INP_DIS                (* (reg8 *) Vin_2__INP_DIS)
/* LCD Common or Segment Drive */
#define Vin_2_LCD_COM_SEG            (* (reg8 *) Vin_2__LCD_COM_SEG)
/* Enable Segment LCD */
#define Vin_2_LCD_EN                 (* (reg8 *) Vin_2__LCD_EN)
/* Slew Rate Control */
#define Vin_2_SLW                    (* (reg8 *) Vin_2__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Vin_2_PRTDSI__CAPS_SEL       (* (reg8 *) Vin_2__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Vin_2_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Vin_2__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Vin_2_PRTDSI__OE_SEL0        (* (reg8 *) Vin_2__PRTDSI__OE_SEL0) 
#define Vin_2_PRTDSI__OE_SEL1        (* (reg8 *) Vin_2__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Vin_2_PRTDSI__OUT_SEL0       (* (reg8 *) Vin_2__PRTDSI__OUT_SEL0) 
#define Vin_2_PRTDSI__OUT_SEL1       (* (reg8 *) Vin_2__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Vin_2_PRTDSI__SYNC_OUT       (* (reg8 *) Vin_2__PRTDSI__SYNC_OUT) 


#if defined(Vin_2__INTSTAT)  /* Interrupt Registers */

    #define Vin_2_INTSTAT                (* (reg8 *) Vin_2__INTSTAT)
    #define Vin_2_SNAP                   (* (reg8 *) Vin_2__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins Vin_2_H */


/* [] END OF FILE */
