#ifndef EspCli_h
#define EspCli_h

#include<Arduino.h>
#include<ESP8266WiFi.h>
#include<ESP8266HTTPClient.h>


class EspCli: public HTTPClient
{
private:
    char* _ssid;
    char* _psw;
public:
    EspCli(WiFiClient cl, const String url);
    EspCli();
    ~EspCli();
    char* ssid();
    char* psw();
};

#endif