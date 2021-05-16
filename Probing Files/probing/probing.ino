#include "ESP_MICRO.h" 

//Initializing Pins that will go into the motor driver
int pin = 6; 
int pin2 = 7;
int pin3 = 8;
// We use three pins, as two pins determine direction of current and a third pin determines the amount of power sent
// This code has four conditions that responds to commands from the python scrypt via wifi
// Input 1 for 1 click, 2 for 2 clicks, 3 for 3 clicks, and 4 for vibrations at 100hz for 1 second
void setup() {
  start("Your network","Password");// Connect to wifi, enter your details here
  pinMode(pin, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  Serial.begin(115200);
}

void loop() 
  {
  waitUntilNewReq();    // Waits until a new request from python come
  action = getPath();
  action.remove(0,1);
  state = action.toInt();
  if (state == 1)
  {
    digitalWrite(pin2, HIGH);
    digitalWrite(pin3, LOW);
    digitalWrite(pin, HIGH);
    delay(100);
    digitalWrite(pin2, LOW);
  }
  if (state == 2)
  {
    digitalWrite(pin2, HIGH);
    digitalWrite(pin3, LOW);
    digitalWrite(pin, HIGH);
    delay(100);
    digitalWrite(pin2, LOW);
    delay(100);
    digitalWrite(pin2, HIGH);
    digitalWrite(pin3, LOW);
    digitalWrite(pin, HIGH);
    delay(100);
    digitalWrite(pin2, LOW);
  }
  if (state == 3)
  {
    digitalWrite(pin2, HIGH);
    digitalWrite(pin3, LOW);
    digitalWrite(pin, HIGH);
    delay(100);
    digitalWrite(pin2, LOW);
    delay(100);
    digitalWrite(pin2, HIGH);
    digitalWrite(pin3, LOW);
    digitalWrite(pin, HIGH);
    delay(100);
    digitalWrite(pin2, LOW);
    delay(100);
    digitalWrite(pin2, HIGH);
    digitalWrite(pin3, LOW);
    digitalWrite(pin, HIGH);
    delay(100);
    digitalWrite(pin2, LOW);
  }
  if (state == 4)
  {
    for(int i=0; i<100; i++){
      digitalWrite(pin, HIGH);
      digitalWrite(pin2, HIGH);
      digitalWrite(pin3, LOW);
      delay(5);
      digitalWrite(pin, LOW);
      delay(5);
    }
  }
}
