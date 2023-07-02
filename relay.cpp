#include "relay.h"

Relay::Relay()
{
}

void Relay::set_pin(int u_data)
{
    m_pin = u_data;
}

int Relay::get_pin()
{
    return m_pin;
}

void Relay::relay_on()
{
    //digitalWrite(m_pin, HIGH);
}

void relay_off()
{
    //digitalWrite(m_pin, LOW);
}

void init()
{
    //pinMode(m_pin, OUTPUT);
}