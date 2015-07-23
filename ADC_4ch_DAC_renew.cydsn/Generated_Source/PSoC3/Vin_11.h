/*******************************************************************************
* File Name: Vin_11.h  
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

#if !defined(CY_PINS_Vin_11_H) /* Pins Vin_11_H */
#define CY_PINS_Vin_11_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Vin_11_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Vin_11_Write(uint8 value) ;
void    Vin_11_SetDriveMode(uint8 mode) ;
uint8   Vin_11_ReadDataReg(void) ;
uint8   Vin_11_Read(void) ;
uint8   Vin_11_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Vin_11_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Vin_11_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Vin_11_DM_RES_UP          PIN_DM_RES_UP
#define Vin_11_DM_RES_DWN         PIN_DM_RES_DWN
#define Vin_11_DM_OD_LO           PIN_DM_OD_LO
#define Vin_11_DM_OD_HI           PIN_DM_OD_HI
#define Vin_11_DM_STRONG          PIN_DM_STRONG
#define Vin_11_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Vin_11_MASK               Vin_11__MASK
#define Vin_11_SHIFT              Vin_11__SHIFT
#define Vin_11_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Vin_11_PS                     (* (reg8 *) Vin_11__PS)
/* Data Register */
#define Vin_11_DR                     (* (reg8 *) Vin_11__DR)
/* Port Number */
#define Vin_11_PRT_NUM                (* (reg8 *) Vin_11__PRT) 
/* Connect to Analog Globals */                                                  
#define Vin_11_AG                     (* (reg8 *) Vin_11__AG)                       
/* Analog MUX bux enable */
#define Vin_11_AMUX                   (* (reg8 *) Vin_11__AMUX) 
/* Bidirectional Enable */                                                        
#define Vin_11_BIE                    (* (reg8 *) Vin_11__BIE)
/* Bit-mask for Aliased Register Access */
#define Vin_11_BIT_MASK               (* (reg8 *) Vin_11__BIT_MASK)
/* Bypass Enable */
#define Vin_11_BYP                    (* (reg8 *) Vin_11__BYP)
/* Port wide control signals */                                                   
#define Vin_11_CTL                    (* (reg8 *) Vin_11__CTL)
/* Drive Modes */
#define Vin_11_DM0                    (* (reg8 *) Vin_11__DM0) 
#define Vin_11_DM1                    (* (reg8 *) Vin_11__DM1)
#define Vin_11_DM2                    (* (reg8 *) Vin_11__DM2) 
/* Input Buffer Disable Override */
#define Vin_11_INP_DIS                (* (reg8 *) Vin_11__INP_DIS)
/* LCD Common or Segment Drive */
#define Vin_11_LCD_COM_SEG            (* (reg8 *) Vin_11__LCD_COM_SEG)
/* Enable Segment LCD */
#define Vin_11_LCD_EN                 (* (reg8 *) Vin_11__LCD_EN)
/* Slew Rate Control */
#define Vin_11_SLW                    (* (reg8 *) Vin_11__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Vin_11_PRTDSI__CAPS_SEL       (* (reg8 *) Vin_11__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Vin_11_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Vin_11__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Vin_11_PRTDSI__OE_SEL0        (* (reg8 *) Vin_11__PRTDSI__OE_SEL0) 
#define Vin_11_PRTDSI__OE_SEL1        (* (reg8 *) Vin_11__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Vin_11_PRTDSI__OUT_SEL0       (* (reg8 *) Vin_11__PRTDSI__OUT_SEL0) 
#define Vin_11_PRTDSI__OUT_SEL1       (* (reg8 *) Vin_11__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Vin_11_PRTDSI__SYNC_OUT       (* (reg8 *) Vin_11__PRTDSI__SYNC_OUT) 


#if defined(Vin_11__INTSTAT)  /* Interrupt Registers */

    #define Vin_11_INTSTAT                (* (reg8 *) Vin_11__INTSTAT)
    #define Vin_11_SNAP                   (* (reg8 *) Vin_11__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins Vin_11_H */


/* [] END OF FILE */
