#include "N76E003.h"
#include "SFR_Macro.h"
#include "Function_define.h"
#include "Common.h"
#include "Delay.h"

#define row1 P00
#define row2 P01
#define row3 P02
#define row4 P03
#define row5 P04

#define col1 P10
#define col2 P11
#define col3 P12
#define col4 P13
#define col5 P14
#define col6 P15
#define col7 P16
#define col8 P17

unsigned int i;
unsigned char xdata beforeAllKey[5]; // 40个位，保存所有40个建的状态
unsigned char xdata allKey[5];		 // 40个位，保存所有40个建的状态

UINT8 tttt = 0;
UINT16 TH1_INIT = 60000;

// 系统时钟      16000 / 16000000 = 0.001s
// 系统时钟1/12  1333  / 1333333  = 0.001s
void Timer1_ISR(void) interrupt 3 //interrupt address is 0x001B
{
	TH1 = (65536 - TH1_INIT) / 256;
	TL1 = (65536 - TH1_INIT) % 256;

	// row1到row5依次拉低
	P0 = 0xFF;
	if (tttt == 5) //所有键扫描完成
	{
		tttt = 0;
		if (memcmp(beforeAllKey, allKey, 5) != 0)
		{
			for (i = 0; i < 5; i++)
			{
				Send_Data_To_UART0(allKey[i]);
			}
		}
	}
	else
	{
		if (tttt == 0)
			P00 = 0;
		if (tttt == 1)
			P01 = 0;
		if (tttt == 2)
			P02 = 0;
		if (tttt == 3)
			P03 = 0;
		if (tttt == 4)
			P04 = 0;

		allKey[tttt] = ~P1;

		// Send_Data_To_UART0(tttt);
		// Send_Data_To_UART0(P0);

		// // 判断col1到col8的状态
		// // Send_Data_To_UART0(~P1);
		// Send_Data_To_UART0(allKey[tttt]);

		tttt++;
	}
}

void main(void)
{
	///////////////////////////////////WDT///////////////////////////////////////
	TA = 0xAA;
	TA = 0x55;
	WDCON = 0x07; //Setting WDT prescale
	set_WDTR;	 //WDT run
	set_WDCLR;	//Clear WDT timer
	set_EWDT;
	EA = 1;
	//set_WIDPD;
	/////////////////////////////////////////////////////////////////////////////

	Set_All_GPIO_Quasi_Mode;

	P00_PushPull_Mode;
	P01_PushPull_Mode;
	P02_PushPull_Mode;
	P03_PushPull_Mode;
	P04_PushPull_Mode;


	TIMER1_MODE1_ENABLE;
	// set_T1M;
	TH1 = (65536 - TH1_INIT) / 256;
	TL1 = (65536 - TH1_INIT) % 256;
	set_ET1; //enable Timer1 interrupt
	set_EA;  //enable interrupts
	set_TR1; //Timer1 run

	InitialUART0_Timer3(115200);
	// Enable_ADC_AIN1; // Enable AIN0 as ADC input, Find in "Function_define.h" - "ADC INIT"
	// Enable_ADC_AIN7;

	while (1)
	{
		set_WDCLR; // 喂狗

		// P04 = ~P04;
	}
}