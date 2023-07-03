#ifndef RELAY_H
#define RELAY_H
#include <Arduino.h>

class Relay
{
public:
    Relay(int user_pin);

    void set_pin(int u_data);
    int get_pin();
    void relay_on();
    void relay_off();
    void init();
    

private:
    int m_pin;

};

#endif
