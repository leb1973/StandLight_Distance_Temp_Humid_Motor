#include "controller.h"

Controller::Controller(View *viewer)
{
   view = viewer;
    lightState = LIGHT_OFF;
}

Controller::~Controller()
{

}

void Controller::updateEvent(std::string strBtn)
{
    switch (lightState)
    {
        
        case LIGHT_OFF:
            if(strBtn == "powerButton"){
                lightState = LED_1_ON;
                view ->updateState("State1On");
            }
            break;

        case LED_1_ON:
            if(strBtn == "powerButton"){
                lightState = LED_2_ON;
                view ->updateState("State2On");
            }
            break;
        case LED_2_ON:
            if(strBtn == "powerButton"){
                lightState = LED_3_ON;
                view ->updateState("State3On");
            }
            break;
        case LED_3_ON:
            if(strBtn == "powerButton"){
                lightState = LED_4_ON;
                view ->updateState("State4On");
            }
            break;
        case LED_4_ON:
            if(strBtn == "powerButton"){
                lightState = LED_5_ON;
                view ->updateState("State5On");
            }
            break;
        case LED_5_ON:
            if(strBtn == "powerButton"){
                lightState = LIGHT_OFF;
                view ->updateState("StateOff");
            }
            break;

        
    }
}
