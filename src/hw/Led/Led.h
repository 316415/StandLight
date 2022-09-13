#ifndef __LED_H__
#define __LED_H__

enum {LIGHT_OFF, LIGHT_ON1, LIGHT_ON2, LIGHT_ON3, LIGHT_ON4, LIGHT_ON5};

class Led
{
private:
    const bool ON = 1;
    const bool OFF = 0;
    int pinNumber;
    bool ledState;

    void writePin(bool pinState);

public:
    Led(int pin);
    virtual ~Led();
    void On();
    void Off();
    void Toggle();
};

#endif /* __LED_H__ */