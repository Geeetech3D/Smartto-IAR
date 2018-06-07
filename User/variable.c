#include "variable.h"
#include "LCD2004.h"
#include "sd_print.h"




SystemInfor system_infor;
Systembuf_Info  Systembuf_Infos;
float Current_Position[4] = {0.0};
float Destination[4];
char cmdbuffer[BUFSIZE][MAX_CMD_SIZE];
bool axis_known_position[3] = {false, false, false};
char Printf_Buf[512]; 
char WF_version[6]="-null";
FILE_DOWNLOAD File_DownST;
u8 UARST_REDIRECT=UARST1_REDIRECT;
/**********************************************************************
*****init data
*****
*****
***********************************************************************/
void system_data_init(void)
{
	system_infor.serial_axis_move_cmd = DISABLE;
	system_infor.print_file_size=0;
	system_infor.system_status=IDLE;
	system_infor.sd_file_cmp=0;
	system_infor.fan_controler_speed =128;
	system_infor.Unexpected_events=DISABLE;
	system_infor.auto_leveling_calculate_enable =ENABLE;
	system_infor.serial_printf_flag = DISABLE;
}

void SD_Printdata_init(void)
{
	system_infor.sd_print_status = SD_PRINTING;
	system_infor.print_percent=0.0;
      system_infor.system_status = PRINT; 
      system_infor.pause_flag = 0;
      system_infor.stop_flag = 0;

}

void my_printf(char *Data)
{
  USART_TypeDef* USARTx;

  if(UARST_REDIRECT==UARST2_REDIRECT&&system_infor.serial_printf_flag != 1)
  {
	USARTx=USART2;
  }
  else if(UARST_REDIRECT==UARST3_REDIRECT)
	 USARTx=USART3;
  else 
   	 USARTx=USART1;
  while ( *Data != 0) 
  {
        USART_SendData(USARTx, *Data);
	while( USART_GetFlagStatus(USARTx, USART_FLAG_TC) == RESET );
	Data++;
  }
}

































