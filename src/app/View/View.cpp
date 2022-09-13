#include <wiringPi.h>
#include "View.h"

View::View(Led *Led)
{
    light = Led;
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
    if(strState == "StateOn")
    {
        lightState = LIGHT_ON;
    }
        break;
    
    case LIGHT_ON:
    if(strState == "StateOff")
    {
        lightState = LIGHT_OFF;
    }
        break;
    }
}

void View::lightView()
{
    switch(lightState)
    {
        case LIGHT_OFF:
        lightoff();
        break;
        case LIGHT_ON:
        lighton();
        break;
    }
}

void View::lighton()
{
    static unsigned int prevTime = 0;
    if(millis() - prevTime < 300) return;
    prevTime = millis(); //전원이 들어오면 무조건 1ms씩 증가되는 타이머 함수
    light->Toggle();
}

void View::lightoff()
{
    light->Off();
}