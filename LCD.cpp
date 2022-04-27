#include "LCD.h"

LCD::LCD() {
    lcd = vrEmuLcdNew(LCD_WIDTH, LCD_HEIGHT, EmuLcdRomA00);
    vrEmuLcdSendCommand(lcd, LCD_CMD_FUNCTION | LCD_CMD_FUNCTION_LCD_2LINE | 0x10);
    vrEmuLcdSendCommand(lcd, LCD_CMD_CLEAR);
    vrEmuLcdSendCommand(lcd, LCD_CMD_HOME);
    vrEmuLcdSendCommand(lcd, LCD_CMD_DISPLAY | LCD_CMD_DISPLAY_ON);
    vrEmuLcdSendCommand(lcd, LCD_CMD_DISPLAY_CURSOR);
}

LCD::~LCD() {
    vrEmuLcdDestroy(lcd);
}

void LCD::sendCommand(uint8_t data) {
    vrEmuLcdSendCommand(lcd, data);
}

void LCD::writeByte(uint8_t data) {
    vrEmuLcdWriteByte(lcd, data);
}

void LCD::writeString(const char *str) {
    vrEmuLcdWriteString(lcd, str);
}

void LCD::updatePixels() {
    vrEmuLcdUpdatePixels(lcd);
}

char LCD::pixelState(int x, int y) {
    return vrEmuLcdPixelState(lcd, x, y);
}

int LCD::numPixelsX() {
    return vrEmuLcdNumPixelsX(lcd);
}

int LCD::numPixelsY() {
    return vrEmuLcdNumPixelsY(lcd);
}
