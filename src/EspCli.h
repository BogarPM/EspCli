#ifndef EspCli_h
#define EspCli_h

#include<Arduino.h>

class EspCli
{
private:
    char* _ssid;
    char* _psw;
public:
    EspCli();
    ~EspCli();
    char* ssid();
    char* psw();
};

#endif