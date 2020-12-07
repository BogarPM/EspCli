#include<Arduino.h>
#include<EspCli.h>
#include<ESP8266WiFi.h>
#include<ESP8266HTTPClient.h>

WiFiClient wcl;
EspCli cl;
char* url = "https://example.org";
void setup() {
  Serial.begin(115200);

  WiFi.mode(WIFI_STA);
  WiFi.begin(cl.ssid(),cl.psw());
  while(WiFi.status() != WL_CONNECTED){
    Serial.print('.');
    delay(500);
  }
  Serial.print('\n');
  Serial.println("Connected");
  WiFi.printDialog(Serial);
  //cl.setUrl(url);
  //cl.setWiFiClient(wcl);
  Serial.println("EspCli HTTP client started");
  /*Serial.print("Client SSID: ");
  Serial.println(cl.ssid());
  Serial.print("Client PSW: ");
  Serial.println(cl.psw());*/
}

void loop() {
  // put your main code here, to run repeatedly:

}
