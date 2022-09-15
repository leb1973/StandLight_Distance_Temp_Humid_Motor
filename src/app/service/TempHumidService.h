#ifndef TEMPHUMIDSERVICE_H
#define TEMPHUMIDSERVICE_H

#include "DHT_data.h"
#include "TempHumidView.h"

class TempHumidService
{
public:
    TempHumidService(TempHumidView *tempHumidView);
    virtual ~TempHumidService();
    void updateEvent(DHT_Data dhtData);

private:
    TempHumidView *tempHumidView;

};

#endif