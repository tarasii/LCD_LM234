#ifndef __EXT_GLCD_H
#define __EXT_GLCD_H

#include <stdint.h>
#include "stm32f1xx_hal.h"


#define EXT_LCD_DELAY  1
#define EXT_LCD_DELAY_LONG  100

/* PIN CONFIG ------------------------------------------------------------------*/
#define DATA_PORT 		GPIOA
#define DATA_PIN0 		GPIO_PIN_0
#define DATA_PIN1 		GPIO_PIN_1
#define DATA_PIN2 		GPIO_PIN_2
#define DATA_PIN3 		GPIO_PIN_3
#define DATA_PIN4 		GPIO_PIN_4
#define DATA_PIN5 		GPIO_PIN_5
#define DATA_PIN6 		GPIO_PIN_6
#define DATA_PIN7 		GPIO_PIN_7

#define CTRL_PORT 		GPIOB
#define CTRL_E 			GPIO_PIN_9
#define CTRL_RW 		GPIO_PIN_7
#define CTRL_RS			GPIO_PIN_8

#define CRSLC_PORT 		GPIOB
#define CRSLC_PIN0 		GPIO_PIN_3
#define CRSLC_PIN1 		GPIO_PIN_5
#define CRSLC_PIN2 		GPIO_PIN_4

#define LNLEN 50

void Init_Ext_GLCD(void);

void GLCD_ON(void);
void GLCD_OFF(void);
void ClearScreen(void);
void TestScreen(uint8_t value);
void TestNetScreen(void);
void PutChar(uint8_t value);
void GotoXY(uint8_t x, uint8_t y);
void WrapWrite_GLCD(uint8_t* message);
void Write_GLCD(uint8_t* message);
void TestChars(void);
void TestScroll(void);
void ClearFullScreen(void);

void GotoGXY(uint8_t gx, uint8_t y);
uint8_t GetByteXY(uint8_t gx, uint8_t y);
void PutByte(uint8_t gx, uint8_t y, uint8_t pb);
void PutPixel(uint8_t gx, uint8_t gy);
void drawLine(int x1, int y1, int x2, int y2);
void Rectangle(int x1, int y1, int x2, int y2);
uint8_t GetByte(void);


#endif /* __EXT_GLCD_H */
