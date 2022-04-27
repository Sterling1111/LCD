#ifndef UNTITLED3_LCD_H
#define UNTITLED3_LCD_H

#include "vrEmuLcd.h"

class LCD {
public:
    LCD();
    ~LCD();
    void sendCommand(uint8_t data);
    void writeByte(uint8_t data);
    void writeString(const char* str);
    void updatePixels();
    char pixelState(int x, int y);
    int numPixelsX();
    int numPixelsY();

private:
    VrEmuLcd* lcd{nullptr};
    static constexpr int LCD_HEIGHT = 2;
    static constexpr int LCD_WIDTH = 16;
};


#endif //UNTITLED3_LCD_H
