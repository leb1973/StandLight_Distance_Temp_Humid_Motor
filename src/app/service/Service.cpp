#include "Service.h"



Service::Service(View *viewer)
{
    view = viewer;
    lightState = LIGHT_OFF;
}

Service::~Service()
{

}

void Service::updateState(std::string strState)
{
    switch (lightState)
    {
        case LIGHT_OFF:
            if (strState == "modeButton" ) {
                lightState = LIGHT_1; 
                view->setState(lightState); 
            }
        break;

        case LIGHT_1:
            if (strState == "modeButton" ) {
                lightState = LIGHT_2;               
            }
             if (strState == "powerButton") {
                lightState = LIGHT_OFF;                
            }
            if(bDistanceLight) {
            view->setState(lightState);
            } else {    // 거리 범위 밖
                view->setState(LIGHT_OFF);
            }
        break;
        case LIGHT_2:
            if (strState == "modeButton" ) {
                lightState = LIGHT_3;                
            }
             if (strState == "powerButton") {
                lightState = LIGHT_OFF;              
            }
            if(bDistanceLight) {
            view->setState(lightState);
            } else {    // 거리 범위 밖
                view->setState(LIGHT_OFF);
            }
            break;
        case LIGHT_3:
            if (strState == "modeButton" ) {
                lightState = LIGHT_4;               
            }
             if (strState == "powerButton") {
                lightState = LIGHT_OFF;                
            }
            if(bDistanceLight) {
            view->setState(lightState);
            } else {    // 거리 범위 밖
                view->setState(LIGHT_OFF);
            }
        break;
        case LIGHT_4:
            if (strState == "modeButton" ) {
                lightState = LIGHT_5;  
            }
             if (strState == "powerButton") {
                lightState = LIGHT_OFF; 
            }
            if(bDistanceLight) {
            view->setState(lightState);
            } else {    // 거리 범위 밖
                view->setState(LIGHT_OFF);
            }
        break;
        case LIGHT_5:
            if (strState == "modeButton" ) {
                lightState = LIGHT_OFF;             
            }
             if (strState == "powerButton") {
                lightState = LIGHT_OFF;
            }
            if(bDistanceLight) {
            view->setState(lightState);
            } else {    // 거리 범위 밖
                view->setState(LIGHT_OFF);
            }

        break;
        
    }
}

void Service::updateDistance(int distance)
{
    
    if(distance <5 || distance < 0)
    {
        // Light off
        bDistanceLight = false;
        view->setState(LIGHT_OFF);
    }
    else {
        bDistanceLight = true;
        view->setState(lightState);
        //
    }
    printf("distance : %d,%d\n",distance,bDistanceLight);
}
