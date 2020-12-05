#ifndef EspCli_h
#define EspCli_h

#include<Arduino.h>
#include<ESP8266WiFi.h>
#include<ESP8266HTTPClient.h>

typedef enum{
    MAIN-SSID = "TROYANO";
} ssid_t;

typedef enum{
    MAIN-PSW = "8363269005";
} psw_t

class EspCli: public HTTPClient
{
private:
    char* _ssid;
    char* _psw;
    //char* _url;
    //WiFiClient _client;
    //HTTPClient _httpClient;
public:
    EspCli(WiFiClient cl, const String url);
    EspCli();
    ~EspCli();
    char* ssid();
    char* psw();
    //void setWiFiClient(WiFiClient cl);
    //void setUrl(char* url);
};

#endif