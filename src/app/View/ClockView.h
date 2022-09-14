#ifndef CLOCKVIEW_H
#define CLOCKVIEW_H


#include <time.h>
#include "LCD.h"

class ClockView
{
public:
    ClockView(LCD *lcd);
    virtual ~ClockView();
    void updateTime(struct tm *timeData);
private:
    struct tm timeDate;
    LCD *lcd;

};

#endif