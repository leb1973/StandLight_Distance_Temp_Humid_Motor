#ifndef TEMPHUMIDVIEW_H
#define TEMPHUMIDVIEW_H

#include "LCD.h"
#include "Led.h"


class TempHumidView
{
public:
    TempHumidView(Led *led1,Led *led2,Led *led3,Led *led4,Led *led5,LCD *lcd);
    virtual ~TempHumidView();
    void setTempHumidData(float temp, float humid);

private:
        LCD *lcd; 
        Led *light1;
        Led *light2;
        Led *light3;
        Led *light4;
        Led *light5;
        


};

#endif