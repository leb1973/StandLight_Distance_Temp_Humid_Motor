#include "View.h"
#include <wiringPi.h>




View::View(Led *led1, Led *led2, Led *led3, Led *led4, Led *led5)
{
    light1 = led1;
    light2 = led2;
    light3 = led3;
    light4=  led4;
    light5 = led5;
    lightState = LIGHT_OFF;
}

View::~View()
{

}

void View::updateState(std::string strState)
{

     switch (lightState)
    {
        
        case LIGHT_OFF:
            if(strState == "State1On"){
                lightState = LED_1_ON;

            }
            break;
        case LED_1_ON:
             if(strState == "State2On"){
                lightState = LED_2_ON;
            }
            break;
        case LED_2_ON:
            if(strState == "State3On"){
                lightState = LED_3_ON;
            }
            break;
        case LED_3_ON:
            if(strState == "State4On"){
                lightState = LED_4_ON;
            }
            break;
        case LED_4_ON:
            if(strState == "State5On"){
                lightState = LED_5_ON;
            }
            break;
        case LED_5_ON:
            if(strState == "StateOff"){
                lightState = LIGHT_OFF;
            }
            break;
    }
}


void View::lightView()
{
    switch (lightState)
    {
        case LIGHT_OFF:
            lightOff();
        break;

        case LED_1_ON:
            lightON1();
        break;

        case LED_2_ON:
            lightON2();         
        break;
        case LED_3_ON:
            lightON3();
        break;
        case LED_4_ON:
            lightON4();
        break;
        case LED_5_ON:
            lightON5();
        break;
    }
}

// void View::lightON()
// {
    
//     prevTime = millis();
//     light1 -> Toggle();
//     light2 -> Toggle();
//     light3 -> Toggle();
//     light4 -> Toggle();
//     light5 -> Toggle();
// }



void View::lightON1()
{
    light1 -> On();
    light2 -> Off();
    light3 -> Off();
    light4 -> Off();
    light5 -> Off();
}
void View::lightON2()
{
    light1 -> On();
    light2 -> On();
    light3 -> Off();
    light4 -> Off();
    light5 -> Off();
}
void View::lightON3()
{
    light1 -> On();
    light2 -> On();
    light3 -> On();
    light4 -> Off();
    light5 -> Off();
}
void View::lightON4()
{
    light1 -> On();
    light2 -> On();
    light3 -> On();
    light4 -> On();
    light5 -> Off();
}
void View::lightON5()
{
    light1 -> On();
    light2 -> On();
    light3 -> On();
    light4 -> On();
    light5 -> On();
}

void View::lightOff()
{
    light1 -> Off();
    light2 -> Off();
    light3 -> Off();
    light4 -> Off();
    light5 -> Off();
}