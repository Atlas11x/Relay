#include "relay.h"

Relay::Relay(int user_pin):m_pin{user_pin}
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
    digitalWrite(m_pin, HIGH);
}

void Relay::relay_off()
{
    digitalWrite(m_pin, LOW);
}

void Relay::init()
{
    pinMode(m_pin, OUTPUT);
}
