#include "MyStm32f407xx.h"
#include<stdio.h>
#define MAX 5

#define BTN_PRESSED ENABLE

void print_lock();
void print_unlock();
void print_alarm();
void approach_light();

void delay(void)
{
	for(unsigned long i=0;i<100000000;i++);
}

void delay_1(void)
{
	for(unsigned long j=0;j<10000000;j++);
}

int main(void)
{
	GPIO_Handle_t GpioLed, GPIOBtn;															// handle
	GpioLed.pGPIOx = GPIOD;                    										        // port used

	// LEDs Configuration
	/*pin configuration*/
	GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;
	GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_LOW;
	GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;

	/* clock  */
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed);


	/*pin configuration*/
	GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;
	GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_LOW;
	GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;

	/* clock  */
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed);

	/*pin configuration*/
	GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_14;
	GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_LOW;
	GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;

	/* clock  */
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed);

	/*pin configuration*/
	GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_15;
	GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_LOW;
	GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;

	/* clock  */
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed);
	// LEDs Configured


	GPIOBtn.pGPIOx = GPIOA;
	GPIOBtn.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_0;
	GPIOBtn.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GPIOBtn.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_LOW;
	GPIOBtn.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;
	GPIO_PeriClockControl(GPIOA, ENABLE);
	GPIO_Init(&GPIOBtn);


	for(int x=0;x<5;x++)
	{
	switch(x)
	{
	case 1: print_lock();
		break;
	case 2: print_unlock();
		break;
	case 3: print_alarm();
		break;
	case 4: approach_light();
		break;
	default:
		//printf("invalid choice\n");
		break;
	}
	}
}


void print_lock()
{
	while(1)
		{
			if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == BTN_PRESSED)
			{
				GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
				GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
				GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
				GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
				//printf("LOCK\n");
				delay();
			}
		}
}

void print_alarm()
{
	while(1)
	{
		if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == BTN_PRESSED)
		{
				GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
				delay_1();
				GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
				delay_1();
				GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
				delay_1();
				GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
				//printf("print alram\n");
				delay();
		}
	}
}

void print_unlock()
{
	while(1)
		{
			if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == BTN_PRESSED)
			{
					GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
					GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
					GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
					GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
					//printf("UNLOCK\n");
					delay();
			}
		}
}

void approach_light()
{
	while(1)
		{
			if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == BTN_PRESSED)
			{
					GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
					delay_1();
					GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
					delay_1();
					GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
					delay_1();
					GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
					//printf("print alram\n");
					delay();
			}
		}
}
