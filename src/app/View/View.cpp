#include "View.h"
#include <wiringPi.h>

View::View(Led *led1,Led *led2,Led *led3,Led *led4,Led *led5,LCD *lcd)
{
    light1 = led1;
    light2 = led2;
    light3 = led3;
    light4 = led4;
    light5 = led5;

    lightState = LIGHT_OFF;
    this->lcd = lcd;
}

View::~View()
{

}

void View::setState(int state)
{
    lightState = state;
}




void View::lightView()
{
    switch (lightState)
    {
        
        case LIGHT_OFF:
            lightOff();
        break;

        case LIGHT_1:
            
            lightOn_1();
        break;
        case LIGHT_2:
            
            lightOn_2();
        break;
        case LIGHT_3:
            
            lightOn_3();
        break;
        case LIGHT_4:
           
            lightOn_4();
        break;
        case LIGHT_5:
            
            lightOn_5();
        break;
    }
}

// void View::lightOn()
// {
//     static unsigned int prevTime = 0;
    
//     if (millis() - prevTime < 300) return;
//     prevTime = millis();
//     light->Toggle();
// }

void View::lightOff()
{
    char buff[30];
    sprintf(buff,"mode off  ");
    lcd->WriteStringXY(0,0,buff);
    lcd->backLightOff();
    light1->Off();
    light2->Off();
    light3->Off();
    light4->Off();
    light5->Off();

}

void View::lightOn_1()
{
    char buff[30];
    sprintf(buff,"mode 1   ");
    lcd->WriteStringXY(0,0,buff);
    lcd->backLightOn();
    light1->On();
    light2->Off();
    light3->Off();
    light4->Off();
    light5->Off();
}

void View::lightOn_2()
{
    char buff[30];
    sprintf(buff,"mode 2   ");
    lcd->WriteStringXY(0,0,buff);
    lcd->backLightOn();
    light1->On();
    light2->On();
    light3->Off();
    light4->Off();
    light5->Off();

}

void View::lightOn_3()
{
    char buff[30];
    sprintf(buff,"mode 3   ");
    lcd->WriteStringXY(0,0,buff);
    lcd->backLightOn();
    light1->On();
    light2->On();
    light3->On();
    light4->Off();
    light5->Off();

}

void View::lightOn_4()
{
    char buff[30];
    sprintf(buff,"mode 4   ");
    lcd->WriteStringXY(0,0,buff);
    lcd->backLightOn();
    light1->On();
    light2->On();
    light3->On();
    light4->On();
    light5->Off();

}

void View::lightOn_5()
{
    char buff[30];
    sprintf(buff,"mode 5   ");
    lcd->WriteStringXY(0,0,buff);
    lcd->backLightOn();
    light1->On();
    light2->On();
    light3->On();
    light4->On();
    light5->On();

}