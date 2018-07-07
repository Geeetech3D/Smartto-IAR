#ifndef __STMFLASH_H__
#define __STMFLASH_H__

#include "stm32f10x.h"
#include "stm32f10x_flash.h"



#define STM32_FLASH_SIZE 512 	 		//STM32 flash size  (unit k)
#define STM32_FLASH_WREN 1              //flash write enable (0:disable  ;1:enable)

//FLASH start addr
#define STM32_FLASH_BASE 0x08000000 	

 

u16 STMFLASH_ReadHalfWord(u32 faddr);		  //Read halfword function
void STMFLASH_WriteLenByte(u32 WriteAddr,u32 DataToWrite,u16 Len);	//Write data of the specified length at the specified address
u32 STMFLASH_ReadLenByte(u32 ReadAddr,u16 Len);						//Read specified length of data at specified address
void STMFLASH_Write(u32 WriteAddr,u16 *pBuffer,u16 NumToWrite);		//Write data of the specified length at the specified address
void STMFLASH_Read(u32 ReadAddr,u16 *pBuffer,u16 NumToRead);   		//Read specified length of data at specified address
void STMFLASH_Write2(u32 WriteAddr,u16 *pBuffer,u16 NumToWrite)	;
void STMFLASH_Erase(u32 WriteAddr,u16 NumToWrite);
//����д��
void Test_Write(u32 WriteAddr,u16 WriteData);								   
#endif

















