#ifndef __LISTENER_H__
#define __LISTENER_H__

#include "Button.h"
#include "controller.h"
#include "ClockCheck.h"
#include "DHT11.h"
#include "DHT_data.h"
#include "UltraSonic.h"

class Listener
{

private :
    Button  *modeButton;
    Button *powerButton;
    ClockCheck *clockCheck;
    Controller *controller;
    DHT11 *dht11;
    UltraSonic *ultraSonic;

public:
    
    Listener(Button *modebutton,Button *powerButton, Controller *control,ClockCheck *clockCheck,DHT11 *dht11,UltraSonic *ultraSonic);
    ~Listener();
    void checkEvent();
};
#endif