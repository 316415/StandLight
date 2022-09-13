#ifndef LISTENER_H
#define LISTENER_H

#include "Controller.h"
#include "Button.h"
#include "Led.h"

#pragma once

class Listener
{
public:
    Listener(Button *button, Controller *control);
    ~Listener();
    void checkEvent();

private:
    Button *powerButton;
    Controller *controller;
};

#endif