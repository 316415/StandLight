#ifndef LISTENER_H
#define LISTENER_H

#include "Button.h"
#include "Led.h"

#pragma once

class Listener
{
public:
    Listener(Button *button, Led *led);
    ~Listener();
    void checkEvent();

private:
    Button *powerButton;
    Led *light;
};

#endif