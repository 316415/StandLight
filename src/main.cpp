#include <iostream>
#include "Button.h"
#include "Led.h"
#include <wiringPi.h>
#include "Listener.h"

int main()
{
    std::cout << "Hello world!" << std::endl;
    
    Button powerButton{27}; //이 버튼은 파워버튼이라고 의미부여를 했음
    Led light(25);
    Listener listener(&powerButton, &light);

    while(1)
    {
        listener.checkEvent();
        delay(50);
    }
    return 0;
}