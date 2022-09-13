#ifndef VIEW_H
#define VIEW_H

#include <string>
#include "Led.h"

#pragma once

enum {LIGHT_OFF, LIGHT_ON};

class View
{
public:
    View(Led *Led);
    virtual ~View();
    void lightView();
    void updateState(std::string strState);
    void lighton();
    void lightoff();

private:
    int lightState;
    Led *light;
};

#endif