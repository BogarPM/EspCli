#include "EspCli.h"
#include "Arduino.h"

EspCli::EspCli(){
    _ssid = "TROYANO";
    _psw = "8363269005";
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