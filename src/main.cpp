#include <iostream>
#include "Button.h"
#include "Led.h"
#include <wiringPi.h>
#include "Listener.h"
#include "Controller.h"
#include "View.h"

int main()
{
    std::cout << "Hello world!" << std::endl;
    
    Button powerButton{27}; //이 버튼은 파워버튼이라고 의미부여를 했음
    Led light1(21);
    Led light2(22);
    Led light3(23);
    Led light4(24);
    Led light5(25);
    View view(&light1, &light2, &light3, &light4, &light5);
    Controller control(&view);
    Listener listener(&powerButton, &control);

    while(1)
    {
        listener.checkEvent();
        view.lightView();
        delay(50);
    }
    return 0;
}