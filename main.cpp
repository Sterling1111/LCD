#include "LCD.h"
#include <iostream>


int main() {

    LCD lcd;
    lcd.writeString("Hello, world!");
    lcd.updatePixels();

    for (int y = 0; y < lcd.numPixelsY(); ++y) {
        for (int x = 0; x < lcd.numPixelsX(); ++x) {
            // do whatever you like with the pixel information. render it to a texture, output it to  a console, whatever
            // values returned are:  -1 = no pixel (character borders), 0 = pixel off, 1 = pixel on
            char pixel = lcd.pixelState(x, y);
            if(pixel == -1 || pixel == 0) {
                std::cout << " ";
            } else {
                std::cout << "m";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}