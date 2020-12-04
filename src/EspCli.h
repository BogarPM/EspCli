#ifndef EspCli_h
#define EspCli_h

#include<Arduino.h>
#include<Esp8266WiFi>

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