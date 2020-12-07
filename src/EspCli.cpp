#include "EspCli.h"
#include "Arduino.h"
#include<String.h>
#include<ESP8266WiFi.h>
#include<ESP8266HTTPClient.h>

//EspCli::_url = "http://example.org";

EspCli::EspCli(){
    _ssid = MAIN-SSID;
    
}

EspCli::EspCli(WiFiClient cl, const String url){
    _ssid = "TROYANO";
    _psw = "8363269005";
    setUrl("http://example.org");
    _client = cl;
    begin(cl,url);
}

EspCli::~EspCli(){
    _ssid = "";
    _psw = "";
}

char* EspCli::ssid(){
    return _ssid;
}

char* EspCli::psw(){
    return _psw;
}

void EspCli::setWiFiClient(WiFiClient cl){
    _client = cl;
    _httpClient.begin(_client,_url);
}
void EspCli::setUrl(char* url){
    _url = url;
}