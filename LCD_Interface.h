#ifndef LCD_INTERFACE_H_
#define LCD_INTERFACE_H_

#define DATA_PORT		PORTD
#define CONTROL_PORT	PORTC
#define FUNCTION_SET 0b00111000
/* Controls the display on/off status, cursor on/off and cursor blink function
* OPTIONS: (0b00001(D)(C)(B))
* D (Display)  : range[0-1] (0->OFF , 1->ON)
* C (Cursor)   : range[0-1] (0->OFF , 1->ON)
* B (Blink)    : range[0-1] (0->OFF , 1->ON)
*/

#define DISPLAY_ON_OFF 0b00001111
/* Clears the entire display */
#define DESPLAY_CLEAR  0b00000001
/* Shifts the cursor position and display to the left without reading or writing
* OPTIONS: (0b0001(S/C)(R/L)(-)(-))
* S/C = 0 and R/L = 0 : cursor shifts to left
* S/C = 0 and R/L = 1 : cursor shifts to right
* S/C = 1 and R/L = 0 : display and cursor shift to left
* S/C = 1 and R/L = 1 : display and cursor shift to right
*/
#define DESPLAY_LEFT  0b00011000
/* Shifts the cursor position and display to the right without reading or writing
* OPTIONS: (0b0001(S/C)(R/L)(-)(-))
* S/C = 0 and R/L = 0 : cursor shifts to left
* S/C = 0 and R/L = 1 : cursor shifts to right
* S/C = 1 and R/L = 0 : display and cursor shift to left
* S/C = 1 and R/L = 1 : display and cursor shift to right
*/
#define DESPLAY_RIGHT 0b00011100

void LCD_VidInit(void);
void LCD_VidSendCommand(u8 LOC_u8Command);
void LCD_VidWriteChar(u8 LOC_u8Data);
void LCD_VidWriteString(u8 LOC_u8Data[]);
void LCD_VidWriteNumber(u32 LOC_u8Number);
void LCD_VidSetPosition(u8 LOC_u8Row , u8 LOC_u8Col);
void LCD_ZigZagDisplay(u8 name);
void LCD_ClearDisplay(void);
void LCD_vidWriteExtraChar (u8 Y,u8 X ,u8 iteration2 );
void LCD_spe_char (u8 Row , u8 Col, u8 ch);
void LCD_VidDrawChar(u8 arr[], u8 pos, u8 row, u8 col);
void LCD_ClearDisplay_SEN(void);


#endif
