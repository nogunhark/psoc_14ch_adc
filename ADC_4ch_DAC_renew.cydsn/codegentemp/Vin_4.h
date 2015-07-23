/*******************************************************************************
* File Name: Vin_4.h  
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

#if !defined(CY_PINS_Vin_4_H) /* Pins Vin_4_H */
#define CY_PINS_Vin_4_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Vin_4_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Vin_4_Write(uint8 value) ;
void    Vin_4_SetDriveMode(uint8 mode) ;
uint8   Vin_4_ReadDataReg(void) ;
uint8   Vin_4_Read(void) ;
uint8   Vin_4_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Vin_4_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Vin_4_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Vin_4_DM_RES_UP          PIN_DM_RES_UP
#define Vin_4_DM_RES_DWN         PIN_DM_RES_DWN
#define Vin_4_DM_OD_LO           PIN_DM_OD_LO
#define Vin_4_DM_OD_HI           PIN_DM_OD_HI
#define Vin_4_DM_STRONG          PIN_DM_STRONG
#define Vin_4_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Vin_4_MASK               Vin_4__MASK
#define Vin_4_SHIFT              Vin_4__SHIFT
#define Vin_4_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Vin_4_PS                     (* (reg8 *) Vin_4__PS)
/* Data Register */
#define Vin_4_DR                     (* (reg8 *) Vin_4__DR)
/* Port Number */
#define Vin_4_PRT_NUM                (* (reg8 *) Vin_4__PRT) 
/* Connect to Analog Globals */                                                  
#define Vin_4_AG                     (* (reg8 *) Vin_4__AG)                       
/* Analog MUX bux enable */
#define Vin_4_AMUX                   (* (reg8 *) Vin_4__AMUX) 
/* Bidirectional Enable */                                                        
#define Vin_4_BIE                    (* (reg8 *) Vin_4__BIE)
/* Bit-mask for Aliased Register Access */
#define Vin_4_BIT_MASK               (* (reg8 *) Vin_4__BIT_MASK)
/* Bypass Enable */
#define Vin_4_BYP                    (* (reg8 *) Vin_4__BYP)
/* Port wide control signals */                                                   
#define Vin_4_CTL                    (* (reg8 *) Vin_4__CTL)
/* Drive Modes */
#define Vin_4_DM0                    (* (reg8 *) Vin_4__DM0) 
#define Vin_4_DM1                    (* (reg8 *) Vin_4__DM1)
#define Vin_4_DM2                    (* (reg8 *) Vin_4__DM2) 
/* Input Buffer Disable Override */
#define Vin_4_INP_DIS                (* (reg8 *) Vin_4__INP_DIS)
/* LCD Common or Segment Drive */
#define Vin_4_LCD_COM_SEG            (* (reg8 *) Vin_4__LCD_COM_SEG)
/* Enable Segment LCD */
#define Vin_4_LCD_EN                 (* (reg8 *) Vin_4__LCD_EN)
/* Slew Rate Control */
#define Vin_4_SLW                    (* (reg8 *) Vin_4__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Vin_4_PRTDSI__CAPS_SEL       (* (reg8 *) Vin_4__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Vin_4_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Vin_4__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Vin_4_PRTDSI__OE_SEL0        (* (reg8 *) Vin_4__PRTDSI__OE_SEL0) 
#define Vin_4_PRTDSI__OE_SEL1        (* (reg8 *) Vin_4__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Vin_4_PRTDSI__OUT_SEL0       (* (reg8 *) Vin_4__PRTDSI__OUT_SEL0) 
#define Vin_4_PRTDSI__OUT_SEL1       (* (reg8 *) Vin_4__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Vin_4_PRTDSI__SYNC_OUT       (* (reg8 *) Vin_4__PRTDSI__SYNC_OUT) 


#if defined(Vin_4__INTSTAT)  /* Interrupt Registers */

    #define Vin_4_INTSTAT                (* (reg8 *) Vin_4__INTSTAT)
    #define Vin_4_SNAP                   (* (reg8 *) Vin_4__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins Vin_4_H */


/* [] END OF FILE */
