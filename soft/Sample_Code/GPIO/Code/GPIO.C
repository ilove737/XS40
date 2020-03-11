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

unsigned char xdata ADCdataH[20], ADCdataL[20];
UINT8 ADCsumH, ADCsumL;
unsigned int i, while_times = 0;
float ADCavg, ButterymV;

unsigned int beforeAlready_9V = 0;	 //之前已经有9V
unsigned int beforeAlready_6300mV = 0; //之前已经有6.3V

unsigned int WorkVoltageIsOK = 0;

//void Timer0_ISR(void) interrupt 1 //interrupt address is 0x000B
//{								  // 8192/(16000000/12) = 0.006144s = 6.144ms

//}

unsigned char xdata allKey[5]; // 40个位，保存所有40个建的状态

UINT8 tttt = 0;
UINT16 TH1_INIT = 65535;		  // 系统时钟     16000 / 16000000 = 0.001s
								  // 系统时钟1/12 1333 / 1333333 = 0.001s
void Timer1_ISR(void) interrupt 3 //interrupt address is 0x001B
{
	TH1 = (65536 - TH1_INIT) / 256;
	TL1 = (65536 - TH1_INIT) % 256;

	// row1到row5依次拉低
	P0 = 0xFF;
	if (tttt == 5)
	{
		tttt = 0;
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

		allKey[tttt] = ~P0;

		Send_Data_To_UART0(tttt);
		Send_Data_To_UART0(P0);

		// 判断col1到col8的状态
		Send_Data_To_UART0(~P1);

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

	Set_All_GPIO_Quasi_Mode; // Define in Function_define.h
	// P00_PushPull_Mode;
	// P10_PushPull_Mode;
	// P11_PushPull_Mode;
	// P12_PushPull_Mode;
	// P00 = 0;
	// P10 = 0;
	// P11 = 0;
	// P12 = 0;

	P00_PushPull_Mode;
	P01_PushPull_Mode;
	P02_PushPull_Mode;
	P03_PushPull_Mode;
	P04_PushPull_Mode;

	P0 = 0xe0;

	//P10_Input_Mode;
	//P11_Input_Mode;
	//P12_Input_Mode;
	//P13_Input_Mode;
	//P14_Input_Mode;
	//P15_Input_Mode;
	//P16_Input_Mode;
	//P17_Input_Mode;
	//P1=0x00;

	//P10_OpenDrain_Mode;
	//P11_OpenDrain_Mode;
	//P12_OpenDrain_Mode;
	//P13_OpenDrain_Mode;
	//P14_OpenDrain_Mode;
	//P15_OpenDrain_Mode;
	//P16_OpenDrain_Mode;
	//P17_OpenDrain_Mode;

	//P10=0;
	// P03_PushPull_Mode;
	// P03_Quasi_Mode;
	// P30_PushPull_Mode;

	// P04_Input_Mode;
	// P04_Quasi_Mode;
	// P04_PushPull_Mode;

	// TIMER0_MODE0_ENABLE;
	// set_ET0; //enable Timer0 interrupt
	// set_EA;  //enable interrupts
	// set_TR0; //Timer0 run

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

	//
	//	while (1)
	//	{
	//		while_times++;
	//		set_WDCLR; // 喂狗

	//		clr_ADCF;
	//		set_ADCS; // ADC start trig signal
	//		while (ADCF == 0)
	//			;
	//		ADCdataH[ADCsumH] = ADCRH;
	//		ADCdataL[ADCsumL] = ADCRL;
	//		ADCsumH++;
	//		ADCsumL++;
	//		if (ADCsumH == 20)
	//		{
	//			ADCsumH = 0;
	//			ADCsumL = 0;
	//			for (i = 0; i < 20; i++)
	//			{
	//				ADCavg = ADCavg + (ADCdataH[i] * 16 + ADCdataL[i]);
	//			}
	//			ADCavg = ADCavg / 20;
	//			ButterymV = 10000 * ADCavg / 4096;
	//			ADCavg = 0;
	//		}
	//

	//

	//
	//		if (ButterymV > 7800)
	//		{
	//			beforeAlready_9V = 1;
	//		}
	//		if (ButterymV < 7800)
	//		{
	//		}
	//		if (ButterymV >= 6300)
	//		{
	//			WorkVoltageIsOK = 1;
	//			beforeAlready_6300mV = 1;

	//		}
	//		if (ButterymV < 6000)
	//		{
	//			// if (!beforeAlready_6300mV) { //防止电压跳变的时候触发断水保护
	//				WorkVoltageIsOK = 0;
	//			// }
	//		}

	//
	//		Timer1_Delay1ms(1);
	//#if 0
	//		if (while_times % 50 == 0)
	//		{
	//			printf("\n%f s", loop_flush / 163.0);
	//			printf("\nAllOff: %d", loopFlushAllOff);
	//
	//			printf("\nButtery: %0.0f mV\n", ButterymV);

	//			if (A_is_open)
	//				printf("A:1  ");
	//			else
	//				printf("A:0  ");

	//			if (B_is_open)
	//				printf("B:1\n");
	//			else
	//				printf("B:0\n");

	//			if (LED)
	//				printf("LED: 1\n");
	//			else
	//				printf("LED: 0\n");

	//			if (Start)
	//				printf("start: 1\n");
	//			else
	//				printf("start: 0\n");

	//			if (hold)
	//				printf("hold:  1\n");
	//			else
	//				printf("hold:  0\n");
	//		}
	//#endif
	//	}
}