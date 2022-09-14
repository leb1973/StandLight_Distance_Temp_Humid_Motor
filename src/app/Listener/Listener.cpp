#include "Listener.h"

Listener::Listener(Button *button,Controller *control,ClockCheck *clock)
{
    powerButton = button;
    controller = control;   
    clockCheck = clock;
}

Listener::~Listener()
{

}

void Listener::checkEvent()
{
     if(powerButton->getState() == RELEASE_ACTIVE) 
     {
           controller -> updateEvent("modeButton");
     }

     if(clockCheck->isUpdate())
     {
        controller->updateEvent("clockUpdate");
     }
       
}