#include "ESP_MICRO.h" //Needed library

int pinERM = 14;
int seconds;
byte start_ = 0;
String action;

void setup() {
  Serial.begin (9600);
  start("WiFi Name","Password");// Connect to wifi, enter your details here
  pinMode(pinERM, OUTPUT);
  delay(50);
}

void loop() {
  
  // Wifi
  if (start_!=1){
    waitUntilNewReq();    // Waits until a new request from python come
    action = getPath();
    action.remove(0,1);
    seconds = action.toInt(); // Signal from python, this tells the motor for the amount of time it needs to be On
    digitalWrite(pinERM, HIGH);
    delay(seconds);
    digitalWrite(pinERM, LOW);
    delay(5);
  }
  start_ = 0;

  
}
