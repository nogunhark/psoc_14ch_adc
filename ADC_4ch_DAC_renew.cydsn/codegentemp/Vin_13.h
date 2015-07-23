/*******************************************************************************
* File Name: Vin_13.h  
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

#if !defined(CY_PINS_Vin_13_H) /* Pins Vin_13_H */
#define CY_PINS_Vin_13_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Vin_13_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Vin_13_Write(uint8 value) ;
void    Vin_13_SetDriveMode(uint8 mode) ;
uint8   Vin_13_ReadDataReg(void) ;
uint8   Vin_13_Read(void) ;
uint8   Vin_13_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Vin_13_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Vin_13_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Vin_13_DM_RES_UP          PIN_DM_RES_UP
#define Vin_13_DM_RES_DWN         PIN_DM_RES_DWN
#define Vin_13_DM_OD_LO           PIN_DM_OD_LO
#define Vin_13_DM_OD_HI           PIN_DM_OD_HI
#define Vin_13_DM_STRONG          PIN_DM_STRONG
#define Vin_13_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Vin_13_MASK               Vin_13__MASK
#define Vin_13_SHIFT              Vin_13__SHIFT
#define Vin_13_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Vin_13_PS                     (* (reg8 *) Vin_13__PS)
/* Data Register */
#define Vin_13_DR                     (* (reg8 *) Vin_13__DR)
/* Port Number */
#define Vin_13_PRT_NUM                (* (reg8 *) Vin_13__PRT) 
/* Connect to Analog Globals */                                                  
#define Vin_13_AG                     (* (reg8 *) Vin_13__AG)                       
/* Analog MUX bux enable */
#define Vin_13_AMUX                   (* (reg8 *) Vin_13__AMUX) 
/* Bidirectional Enable */                                                        
#define Vin_13_BIE                    (* (reg8 *) Vin_13__BIE)
/* Bit-mask for Aliased Register Access */
#define Vin_13_BIT_MASK               (* (reg8 *) Vin_13__BIT_MASK)
/* Bypass Enable */
#define Vin_13_BYP                    (* (reg8 *) Vin_13__BYP)
/* Port wide control signals */                                                   
#define Vin_13_CTL                    (* (reg8 *) Vin_13__CTL)
/* Drive Modes */
#define Vin_13_DM0                    (* (reg8 *) Vin_13__DM0) 
#define Vin_13_DM1                    (* (reg8 *) Vin_13__DM1)
#define Vin_13_DM2                    (* (reg8 *) Vin_13__DM2) 
/* Input Buffer Disable Override */
#define Vin_13_INP_DIS                (* (reg8 *) Vin_13__INP_DIS)
/* LCD Common or Segment Drive */
#define Vin_13_LCD_COM_SEG            (* (reg8 *) Vin_13__LCD_COM_SEG)
/* Enable Segment LCD */
#define Vin_13_LCD_EN                 (* (reg8 *) Vin_13__LCD_EN)
/* Slew Rate Control */
#define Vin_13_SLW                    (* (reg8 *) Vin_13__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Vin_13_PRTDSI__CAPS_SEL       (* (reg8 *) Vin_13__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Vin_13_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Vin_13__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Vin_13_PRTDSI__OE_SEL0        (* (reg8 *) Vin_13__PRTDSI__OE_SEL0) 
#define Vin_13_PRTDSI__OE_SEL1        (* (reg8 *) Vin_13__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Vin_13_PRTDSI__OUT_SEL0       (* (reg8 *) Vin_13__PRTDSI__OUT_SEL0) 
#define Vin_13_PRTDSI__OUT_SEL1       (* (reg8 *) Vin_13__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Vin_13_PRTDSI__SYNC_OUT       (* (reg8 *) Vin_13__PRTDSI__SYNC_OUT) 


#if defined(Vin_13__INTSTAT)  /* Interrupt Registers */

    #define Vin_13_INTSTAT                (* (reg8 *) Vin_13__INTSTAT)
    #define Vin_13_SNAP                   (* (reg8 *) Vin_13__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins Vin_13_H */


/* [] END OF FILE */
