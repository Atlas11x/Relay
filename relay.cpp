//#include <Arduino> Закоментил, что б Vscode не выедал мозг error-ом. Вернуть, когда буду пушить.
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
