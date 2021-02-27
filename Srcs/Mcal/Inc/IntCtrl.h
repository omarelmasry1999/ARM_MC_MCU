/**********************************************************************************
*
*   File Name:IntCtrl.h
*
*   Description : Definition Of NVIC Functions
*
*   Author : Omar Elmasry
************************************************************************************/
#ifndef INTCTRL_H
#define INTCTRL_H

#include"../../Common/Platform_Types.h"
#include"../../Common/Std_Types.h"
#include"IntCtrl_Types.h"
#include"../../Config/IntCtrl_Cfg.h"
#include"../../Common/Mcu_Hw.h"


#define CPU_DISABLE_ALL_Interupts()		__asm ("CPSID i")
#define CPU_ENABLE_ALL_Interupts()		__asm ("CPSIE i")
  

#define NVIC_GROUPING_SYSTEM_XXX 				   4
#define	NVIC_GROUPING_SYSTEM_XXY 				   5
#define	NVIC_GROUPING_SYSTEM_XYY 				   6
#define	NVIC_GROUPING_SYSTEM_YYY 				   7 

typedef struct{
	IntCtrl_InterruptType	Interupt_Number;
	uint8					Group_Priority;
	uint8					SubGroup_Priority;
}NVIC_CfgType;

extern const NVIC_CfgType NVIC_Cfg[NVIC_ACTIVATED_INT_SIZE];
/****************************************************************************
* \Syntax : void IntCtrl_Init(void)
* \Description: Initilze NVIC/SCB Module
*
* \Sync\Async: Sync
* \Reentrancy: none
* \Parameters (in): none
* \Parameters (out): none
* \Return Value:    none
*
******************************************************************************/
void IntCtrl_Init(void);

#endif