#include <wiringPi.h>
#include "View.h"

View::View(Led *Led1, Led *Led2, Led *Led3, Led *Led4, Led *Led5)
{
    light1 = Led1;
    light2 = Led2;
    light3 = Led3;
    light4 = Led4;
    light5 = Led5;
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
    if(strState == "StateOn1")
    {
        lightState = LIGHT_ON1;
    }
        break;

    case LIGHT_ON1:
    if(strState == "StateOn2")
    {
        lightState = LIGHT_ON2;
    }
        break;

    case LIGHT_ON2:
    if(strState == "StateOn3")
    {
        lightState = LIGHT_ON3;
    }
        break;

    case LIGHT_ON3:
    if(strState == "StateOn4")
    {
        lightState = LIGHT_ON4;
    }
        break;

    case LIGHT_ON4:
    if(strState == "StateOn5")
    {
        lightState = LIGHT_ON5;
    }
        break;

    case LIGHT_ON5:
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
        case LIGHT_ON1:
        lighton(LIGHT_ON1);
        break;
        case LIGHT_ON2:
        lighton(LIGHT_ON2);
        break;
        case LIGHT_ON3:
        lighton(LIGHT_ON3);
        break;
        case LIGHT_ON4:
        lighton(LIGHT_ON4);
        break;
        case LIGHT_ON5:
        lighton(LIGHT_ON5);
        break;
    }
}

void View::lighton(int lightState)
{
    switch(lightState)
    {
        case LIGHT_ON1:
        light1->On();
        break;
        case LIGHT_ON2:
        light2->On();
        break;
        case LIGHT_ON3:
        light3->On();
        break;
        case LIGHT_ON4:
        light4->On();
        break;
        case LIGHT_ON5:
        light5->On();
        break;
    }
}

void View::lightoff()
{
    light1->Off();
    light2->Off();
    light3->Off();
    light4->Off();
    light5->Off();
}