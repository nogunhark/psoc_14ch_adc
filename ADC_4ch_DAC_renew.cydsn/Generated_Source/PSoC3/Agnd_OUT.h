/*******************************************************************************
* File Name: Agnd_OUT.h  
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

#if !defined(CY_PINS_Agnd_OUT_H) /* Pins Agnd_OUT_H */
#define CY_PINS_Agnd_OUT_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Agnd_OUT_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Agnd_OUT_Write(uint8 value) ;
void    Agnd_OUT_SetDriveMode(uint8 mode) ;
uint8   Agnd_OUT_ReadDataReg(void) ;
uint8   Agnd_OUT_Read(void) ;
uint8   Agnd_OUT_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Agnd_OUT_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Agnd_OUT_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Agnd_OUT_DM_RES_UP          PIN_DM_RES_UP
#define Agnd_OUT_DM_RES_DWN         PIN_DM_RES_DWN
#define Agnd_OUT_DM_OD_LO           PIN_DM_OD_LO
#define Agnd_OUT_DM_OD_HI           PIN_DM_OD_HI
#define Agnd_OUT_DM_STRONG          PIN_DM_STRONG
#define Agnd_OUT_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Agnd_OUT_MASK               Agnd_OUT__MASK
#define Agnd_OUT_SHIFT              Agnd_OUT__SHIFT
#define Agnd_OUT_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Agnd_OUT_PS                     (* (reg8 *) Agnd_OUT__PS)
/* Data Register */
#define Agnd_OUT_DR                     (* (reg8 *) Agnd_OUT__DR)
/* Port Number */
#define Agnd_OUT_PRT_NUM                (* (reg8 *) Agnd_OUT__PRT) 
/* Connect to Analog Globals */                                                  
#define Agnd_OUT_AG                     (* (reg8 *) Agnd_OUT__AG)                       
/* Analog MUX bux enable */
#define Agnd_OUT_AMUX                   (* (reg8 *) Agnd_OUT__AMUX) 
/* Bidirectional Enable */                                                        
#define Agnd_OUT_BIE                    (* (reg8 *) Agnd_OUT__BIE)
/* Bit-mask for Aliased Register Access */
#define Agnd_OUT_BIT_MASK               (* (reg8 *) Agnd_OUT__BIT_MASK)
/* Bypass Enable */
#define Agnd_OUT_BYP                    (* (reg8 *) Agnd_OUT__BYP)
/* Port wide control signals */                                                   
#define Agnd_OUT_CTL                    (* (reg8 *) Agnd_OUT__CTL)
/* Drive Modes */
#define Agnd_OUT_DM0                    (* (reg8 *) Agnd_OUT__DM0) 
#define Agnd_OUT_DM1                    (* (reg8 *) Agnd_OUT__DM1)
#define Agnd_OUT_DM2                    (* (reg8 *) Agnd_OUT__DM2) 
/* Input Buffer Disable Override */
#define Agnd_OUT_INP_DIS                (* (reg8 *) Agnd_OUT__INP_DIS)
/* LCD Common or Segment Drive */
#define Agnd_OUT_LCD_COM_SEG            (* (reg8 *) Agnd_OUT__LCD_COM_SEG)
/* Enable Segment LCD */
#define Agnd_OUT_LCD_EN                 (* (reg8 *) Agnd_OUT__LCD_EN)
/* Slew Rate Control */
#define Agnd_OUT_SLW                    (* (reg8 *) Agnd_OUT__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Agnd_OUT_PRTDSI__CAPS_SEL       (* (reg8 *) Agnd_OUT__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Agnd_OUT_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Agnd_OUT__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Agnd_OUT_PRTDSI__OE_SEL0        (* (reg8 *) Agnd_OUT__PRTDSI__OE_SEL0) 
#define Agnd_OUT_PRTDSI__OE_SEL1        (* (reg8 *) Agnd_OUT__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Agnd_OUT_PRTDSI__OUT_SEL0       (* (reg8 *) Agnd_OUT__PRTDSI__OUT_SEL0) 
#define Agnd_OUT_PRTDSI__OUT_SEL1       (* (reg8 *) Agnd_OUT__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Agnd_OUT_PRTDSI__SYNC_OUT       (* (reg8 *) Agnd_OUT__PRTDSI__SYNC_OUT) 


#if defined(Agnd_OUT__INTSTAT)  /* Interrupt Registers */

    #define Agnd_OUT_INTSTAT                (* (reg8 *) Agnd_OUT__INTSTAT)
    #define Agnd_OUT_SNAP                   (* (reg8 *) Agnd_OUT__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins Agnd_OUT_H */


/* [] END OF FILE */
