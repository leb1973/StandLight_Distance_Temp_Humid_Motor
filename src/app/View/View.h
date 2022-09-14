#ifndef __VIEW_H__
#define __VIEW_H__

    #include <string>
    #include "Led.h"
    enum{LIGHT_OFF,LED_1_ON,LED_2_ON,LED_3_ON,LED_4_ON,LED_5_ON};
class View
{
    private:
        int lightState;

        Led *light1;
        Led *light2;
        Led *light3;
        Led *light4;
        Led *light5;
        

    public:
    View(Led *led1,Led *led2,Led *led3,Led *led4,Led *led5);
    virtual ~View();
    void lightView();
    void updateState(std::string strState);
    void lightON();
    void lightOff();
    void lightON1();
    void lightON2();
    void lightON3();
    void lightON4();
    void lightON5();
};
#endif

