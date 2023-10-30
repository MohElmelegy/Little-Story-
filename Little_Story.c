/*
 * Game_Pro.c
 *
 * Created: 10/26/2023 1:07:56 AM
 *  Author: WWWDOOTCOM.COM
 */
#define F_CPU 8000000
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_Interface.h"
#include "LCD_Interface.h"
#include "KEYPAD_Interface.h"
#include <util/delay.h>
#include <stdio.h>
#include <stdlib.h>
/* Direction macros */
/*#define BOY_CH 8
#define BALL_CH 9
#define SNAK_CH1 10
#define SNAK_CH2 11 */
#define FAA_char 8
#define LAM_char 9
#define SEN_char 10
#define TAA_char 11
#define YAA_char 12
#define NON_char 13

#define HEART_char 14

/* Array that represents the 32 cells of 16x2 LCD */

int main(void)
{
    /* Initializing LCD and Keypad */
    LCD_VidInit();
    KPD_VidInit();
    /* cursor OFF */
    LCD_VidSendCommand(0b00001100);
    while (1)
    {
        for (int i = 0; i <= 15; i++)
        {

            LCD_ClearDisplay();
            LCD_spe_char(0, i, FAA_char);
            _delay_ms(50);
        }
        for (int i = 0; i <= 14; i++)
        {

            LCD_VidSendCommand(128);
            LCD_VidWriteString("               "); // manually clear the display
            LCD_VidSendCommand(192);
            LCD_spe_char(0, i, LAM_char);
            _delay_ms(50);
        }
        for (int i = 0; i <= 13; i++)
        {

            LCD_VidSendCommand(128);
            LCD_VidWriteString("              "); // manually clear the display
            LCD_VidSendCommand(192);
            LCD_spe_char(0, i, SEN_char);
            _delay_ms(50);
        }

        for (int i = 0; i <= 12; i++)
        {

            LCD_VidSendCommand(128);
            LCD_VidWriteString("             "); // manually clear the display
            LCD_VidSendCommand(192);
            LCD_spe_char(0, i, TAA_char);
            _delay_ms(50);
        }

        for (int i = 0; i <= 11; i++)
        {

            LCD_VidSendCommand(128);
            LCD_VidWriteString("            "); // manually clear the display
            LCD_VidSendCommand(192);
            LCD_spe_char(0, i, YAA_char);
            _delay_ms(50);
        }

        for (int i = 0; i <= 10; i++)
        {

            LCD_VidSendCommand(128);
            LCD_VidWriteString("          "); // manually clear the display
            LCD_VidSendCommand(192);
            LCD_VidSetPosition(0, i);
            LCD_VidWriteString("_");
            _delay_ms(50);
        }
        for (int i = 0; i <= 9; i++)
        {

            LCD_VidSendCommand(128);
            LCD_VidWriteString("         "); // manually clear the display
            LCD_VidSendCommand(192);
            LCD_VidSetPosition(0, i);
            LCD_VidWriteString("_");
            _delay_ms(50);
        }
        for (int i = 0; i <= 8; i++)
        {

            LCD_VidSendCommand(128);
            LCD_VidWriteString("         "); // manually clear the display
            LCD_VidSendCommand(192);
            LCD_VidSetPosition(0, i);
            LCD_VidWriteString("_");
            _delay_ms(50);
        }

        for (int i = 0; i <= 7; i++)
        {
            LCD_VidSendCommand(128);
            LCD_VidWriteString("        "); // manually clear the display
            LCD_VidSendCommand(192);
            LCD_spe_char(0, i, NON_char);
            _delay_ms(50);
        }

        for (int i = 0; i <= 4; i++)
        {

            LCD_VidSendCommand(128);
            LCD_VidWriteString("     "); // manually clear the display
            LCD_VidSendCommand(192);
            LCD_spe_char(0, i, HEART_char);
            _delay_ms(50);
        }

        _delay_ms(3000);
    }

    return 0;
}