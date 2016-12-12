#include "mbed.h"

//Setup a new class for a Shiftbrite RGB LED module
class Shiftbrite
{
public:
    Shiftbrite(PinName pin_e, PinName pin_l, PinName pin_do, PinName pin_di, PinName pin_clk);
    void write(int red, int green, int blue);

private:
//class sets up the pins
    DigitalOut _pin_e;
    DigitalOut _pin_l;
    SPI _spi;
};

Shiftbrite::Shiftbrite(PinName pin_e, PinName pin_l, PinName pin_do, PinName pin_di, PinName pin_clk)
    : _pin_e(pin_e), _pin_l(pin_l), _spi(pin_do, pin_di, pin_clk)
{
 // ADD CODE HERE
  DigitalOut _pin_e(p9);
 DigitalOut _pin_l(p10);
 SPI _spi(p11, p12, p13);
}

void Shiftbrite::write(int red, int green, int blue)
{
 // ADD CODE HERE
 if (LED1==1) {
    Shiftbrite::write((red>>6),0,0);
    wait(2.0);
    }
 if (LED2==1) {
    Shiftbrite::write(0,0,(blue>>6));
    wait(2.0);
   }
    _pin_e=1;
    _pin_l=1;
}
