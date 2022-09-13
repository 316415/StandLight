#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Led.h"
#include <string>
#include "Button.h"
#include "View.h"

#pragma once

class Controller
{
public:
    Controller(View *viewer);
    virtual ~Controller();
    void updateEvent(std::string strBtn);

private:
    int lightState;
    View *view;
};

#endif