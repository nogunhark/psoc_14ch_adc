/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <project.h>
#include <stdio.h>
#define CHANNEL_1           (0x00)
#define CHANNEL_2           (0x01)
#define CHANNEL_3           (0x02)
#define CHANNEL_4           (0x03)




/* Global variables */
volatile uint8  dataReady;
void RegWordTo2ByteSave( unsigned short, unsigned int);
unsigned short Reg2ByteToWordLoad(int16 *TgtAdd );
void Hex_2_Ascii(uint8 hex);

uint32 ms_count = 0;
uint32 CH_Ini = 0x01;
uint16 timer_tick0=0; 

uint32 i=0, j=0;

uint8 ch[] = {'1','2','3','4','5','6','7','8','9','A','B','C','D','E'};

uint8 rx_buf[256];


void write (uint8* buf);
int hex_print( unsigned short);

CY_ISR(MY_ISR) {
        timer_tick0 ++;
}
char putchar(char c)
{
	// UART_PutChar(c);
	UART_PutChar(c);
	return c;
}




void main()

{ 
    Timer_Start();
    UART_Start();

    CyGlobalIntEnable;
    
    ADC_Start();
    isr_1_StartEx(MY_ISR);
    ADC_StartConvert();
    
    for(;;)
    {
        
        if(timer_tick0 == 1000)
        {
            timer_tick0 = 0;
              ADC_StopConvert();
              CyDelay(1);
              Control_Write(i);
              CyDelay(10);
              ADC_StartConvert();
              while (Status_Read() == 0x00)
             {
             }
            UART_PutChar(ch[i]);
            UART_PutString(" : ");
            write(&rx_buf[j]);
            
            Hex_2_Ascii(rx_buf[j]);
            Hex_2_Ascii(rx_buf[j+1]);
            UART_PutString("\n\r");
            
            if(j == 28)
            {
                j=0;
            }
            j+=2;

            if(++i == 14)
            {
                i=0;
            }
        }
       
        /*if (timer_tick0 == 1000)
        {
           
             //CH_Ini  =CHANNEL_1;
            
             // UART_PutString("\n\r port 1\n\r");
              ADC_StopConvert();
              CyDelay(1);
              Control_Write(ch);
              CyDelay(10);
              ADC_StartConvert();
              while (Status_Read() == 0x00)
             {
             }
          
             write();
            //timer_tick0 =0 ;
            
            ch++;
		}
        
		else if (timer_tick0 == 2000)
        {
             
            ADC_StopConvert();
              CyDelay(1);
              Control_Write(ch);
              CyDelay(10);
              ADC_StartConvert();
              while (Status_Read() == 0x00)
             {
             }
          
             write();
            //timer_tick0 =0 ;
            
            ch++;

		}
		else if (timer_tick0 == 3000)
        {
             
             ADC_StopConvert();
              CyDelay(1);
              Control_Write(ch);
              CyDelay(10);
              ADC_StartConvert();
              while (Status_Read() == 0x00)
             {
             }
          
             write();
            //timer_tick0 =0 ;
            
            ch++;
		}
		else if (timer_tick0 == 4000)
        {
           
             ADC_StopConvert();
              CyDelay(1);
              Control_Write(ch);
              CyDelay(10);
              ADC_StartConvert();
              while (Status_Read() == 0x00)
             {
             }
          
             write();
            //timer_tick0 =0 ;
            
            ch++;
		}
        else if (timer_tick0 == 4000)
        {
           
            CH_Ini  =CHANNEL_4;
           
            UART_PutString("\n\r port 4\n\r");
             ADC_StopConvert();
            CyDelay(1);
            Control_Write(ch);
            CyDelay(10);
             ADC_StartConvert();
            while (Status_Read() == 0x00)
             {
             }
               write();
		}*/
        
        

    }
 }   
    
void write (uint8* buf)
{ 
    int16 dec;
    uint16 MASK = 0x00FF;
    uint8 hex[2];

    char Outputstring1[32]; 
    float VII;
    
    dec=ADC_GetResult16();
    
    hex[0] = (dec>>8)&MASK;
    hex[1] = dec&MASK;
    
    buf[0] = hex[0];
    buf[1] = hex[1];

}

void RegWordTo2ByteSave( unsigned short d, unsigned int *TgtAdd )
{
	unsigned int	* d1;

	d1 = (unsigned int *)&d;
	TgtAdd[1] = d1[0];
	TgtAdd[0] = d1[1];
        
        return;
}

unsigned short Reg2ByteToWordLoad(int8 *TgtAdd )
{
	unsigned short d;
	unsigned int* d1;

	d1 = (unsigned int *)&d;
	d1[0] = TgtAdd[1];
	d1[1] = TgtAdd[0];
	return d;
}

void Hex_2_Ascii(uint8 hex)
{
    uint8 U_temp=0;
    uint8 Ascii[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    uint8 MASK=0x0F;
    
    U_temp = (hex>>4)&MASK;
    UART_PutChar(Ascii[U_temp]);
    U_temp = (hex)&MASK;
    UART_PutChar(Ascii[U_temp]);
}
