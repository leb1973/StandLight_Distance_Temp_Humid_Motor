#ifndef CLOCKSERVICE_H
#define CLOCKSERVICE_H

#pragma once
#include <time.h>
#include "ClockView.h"

class ClockService
{
public:
    ClockService(ClockView *view);
    virtual ~ClockService();
    void updateEvent();

private:
    time_t curTime;
    ClockView *clockView;
};

#endif