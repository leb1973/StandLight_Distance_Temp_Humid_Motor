#ifndef __LISTENER_H__
#define __LISTENER_H__

#include "Button.h"
#include "controller.h"
#include "ClockCheck.h"

class Listener
{

private :
    Button  *modeButton;
    Button *powerButton;
    ClockCheck *clockCheck;
    Controller *controller;

public:
    
    Listener(Button *modebutton,Button *powerButton, Controller *control,ClockCheck *clockCheck);
    ~Listener();
    void checkEvent();
};
#endif