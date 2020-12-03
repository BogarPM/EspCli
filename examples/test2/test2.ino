#include<Arduino.h>
#include<EspCli.h>
EspCli cli();
void setup() {
  Serial.begin(115200);
  Serial.println(cli.ssid());

}

void loop() {
  // put your main code here, to run repeatedly:

}
