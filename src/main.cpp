#include <iostream>
#include <wiringPi.h> 
#include "Button.h"
#include "Led.h"
#include "Listener.h"
#include <wiringPi.h>
#include "View.h"
#include "controller.h"
#include <time.h>
#include <string>
#include "LCD.h"
#include "ClockView.h"
#include "Service.h"
#include "ClockService.h"
#include "ClockCheck.h"
#include "I2C.h"




int main()
{
    std::cout << "Hello World!" << std::endl;
    time_t timeSec;
    struct tm *timeData;
    Button modeButton1(27);
    Button powerButton2(28);
    ClockCheck ClockCheck;
    Led led1(21);
    Led led2(22);
    Led led3(23);
    Led led4(24);
    Led led5(25);
    LCD lcd(new I2C("/dev/i2c-1",0x27));
    View view(&led1, &led2, &led3, &led4, &led5,&lcd);
    ClockView clockView(&lcd);
    Service service(&view);
    ClockService clockService(&clockView);
    Controller control(&service,&clockService);
    Listener listener(&modeButton1, &powerButton2, &control, &ClockCheck);
    
    while (1)
    {
        listener.checkEvent();
        view.lightView();
        timeSec = time(NULL);
        timeData = localtime(&timeSec);
        // std::cout << "timeSec : " << timeSec << std::endl;
        // std::cout << timeData->tm_hour  << ":"
        //           << timeData->tm_min  << ":"
        //           << timeData->tm_sec  << std::endl;
       delay(100);
    }

    return 0;

}