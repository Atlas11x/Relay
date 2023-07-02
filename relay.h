#ifndef RELAY_H
#define RELAY_H
//#include <Arduino> Закоментил, что б Vscode не выедал мозг error-ом. Вернуть, когда буду пушить.

class Relay
{
public:
    Relay();

    void set_pin(int u_data);
    int get_pin();
    void relay_on();
    void relay_off();
    

private:
    int m_pin{8};

};

#endif
