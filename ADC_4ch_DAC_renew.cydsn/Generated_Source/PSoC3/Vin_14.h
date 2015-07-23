/*******************************************************************************
* File Name: Vin_14.h  
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

#if !defined(CY_PINS_Vin_14_H) /* Pins Vin_14_H */
#define CY_PINS_Vin_14_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Vin_14_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Vin_14_Write(uint8 value) ;
void    Vin_14_SetDriveMode(uint8 mode) ;
uint8   Vin_14_ReadDataReg(void) ;
uint8   Vin_14_Read(void) ;
uint8   Vin_14_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Vin_14_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Vin_14_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Vin_14_DM_RES_UP          PIN_DM_RES_UP
#define Vin_14_DM_RES_DWN         PIN_DM_RES_DWN
#define Vin_14_DM_OD_LO           PIN_DM_OD_LO
#define Vin_14_DM_OD_HI           PIN_DM_OD_HI
#define Vin_14_DM_STRONG          PIN_DM_STRONG
#define Vin_14_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Vin_14_MASK               Vin_14__MASK
#define Vin_14_SHIFT              Vin_14__SHIFT
#define Vin_14_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Vin_14_PS                     (* (reg8 *) Vin_14__PS)
/* Data Register */
#define Vin_14_DR                     (* (reg8 *) Vin_14__DR)
/* Port Number */
#define Vin_14_PRT_NUM                (* (reg8 *) Vin_14__PRT) 
/* Connect to Analog Globals */                                                  
#define Vin_14_AG                     (* (reg8 *) Vin_14__AG)                       
/* Analog MUX bux enable */
#define Vin_14_AMUX                   (* (reg8 *) Vin_14__AMUX) 
/* Bidirectional Enable */                                                        
#define Vin_14_BIE                    (* (reg8 *) Vin_14__BIE)
/* Bit-mask for Aliased Register Access */
#define Vin_14_BIT_MASK               (* (reg8 *) Vin_14__BIT_MASK)
/* Bypass Enable */
#define Vin_14_BYP                    (* (reg8 *) Vin_14__BYP)
/* Port wide control signals */                                                   
#define Vin_14_CTL                    (* (reg8 *) Vin_14__CTL)
/* Drive Modes */
#define Vin_14_DM0                    (* (reg8 *) Vin_14__DM0) 
#define Vin_14_DM1                    (* (reg8 *) Vin_14__DM1)
#define Vin_14_DM2                    (* (reg8 *) Vin_14__DM2) 
/* Input Buffer Disable Override */
#define Vin_14_INP_DIS                (* (reg8 *) Vin_14__INP_DIS)
/* LCD Common or Segment Drive */
#define Vin_14_LCD_COM_SEG            (* (reg8 *) Vin_14__LCD_COM_SEG)
/* Enable Segment LCD */
#define Vin_14_LCD_EN                 (* (reg8 *) Vin_14__LCD_EN)
/* Slew Rate Control */
#define Vin_14_SLW                    (* (reg8 *) Vin_14__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Vin_14_PRTDSI__CAPS_SEL       (* (reg8 *) Vin_14__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Vin_14_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Vin_14__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Vin_14_PRTDSI__OE_SEL0        (* (reg8 *) Vin_14__PRTDSI__OE_SEL0) 
#define Vin_14_PRTDSI__OE_SEL1        (* (reg8 *) Vin_14__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Vin_14_PRTDSI__OUT_SEL0       (* (reg8 *) Vin_14__PRTDSI__OUT_SEL0) 
#define Vin_14_PRTDSI__OUT_SEL1       (* (reg8 *) Vin_14__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Vin_14_PRTDSI__SYNC_OUT       (* (reg8 *) Vin_14__PRTDSI__SYNC_OUT) 


#if defined(Vin_14__INTSTAT)  /* Interrupt Registers */

    #define Vin_14_INTSTAT                (* (reg8 *) Vin_14__INTSTAT)
    #define Vin_14_SNAP                   (* (reg8 *) Vin_14__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins Vin_14_H */


/* [] END OF FILE */
