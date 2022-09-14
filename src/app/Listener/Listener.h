#ifndef __LISTENER_H__
#define __LISTENER_H__

#include "Button.h"
#include "controller.h"

class Listener
{

private :
    Button *powerButton;
    Controller *controller;

public:
    
    Listener(Button *button, Controller *control);
    ~Listener();
    void checkEvent();
};
#endif