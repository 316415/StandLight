#ifndef VIEW_H
#define VIEW_H

#include <string>
#include "Led.h"

#pragma once



class View
{
public:
    View(Led *Led1, Led *Led2, Led *Led3, Led *Led4, Led *Led5);
    virtual ~View();
    void lightView();
    void updateState(std::string strState);
    void lighton(int lightState);
    void lightoff();

private:
    int lightState;
    Led *light1, *light2, *light3, *light4, *light5;
};

#endif