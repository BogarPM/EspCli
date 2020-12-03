#include<Arduino.h>
#include<EspCli.h>


EspCli cl;

void setup() {
  
  Serial.begin(115200);
  Serial.print("Client SSID: ");
  Serial.println(cl.ssid());
  Serial.print("Client PSW: ");
  Serial.println(cl.psw());
}

void loop() {
  // put your main code here, to run repeatedly:

}
