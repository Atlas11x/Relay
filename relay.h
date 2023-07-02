#ifndef RELAY_H
#define RELAY_H

class Relay
{
public:
    Relay();

    void set_pin(int u_data);
    int get_pin();
    

private:
    int m_pin{8};

};

#endif
