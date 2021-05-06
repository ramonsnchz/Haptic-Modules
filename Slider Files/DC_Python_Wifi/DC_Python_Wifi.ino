
#include "ESP_MICRO.h" //Needed library to communicate with the esp8266 
int counter=0;
int pinA = 12; // This pin is the encoder pin B
int pinB = 14; // This pin is the encoder pin A
byte encoderSt=0;
int Motor_Forward = 2;
int Motor_Backward = 0;
int goal; // This is the desired position of the motor
int error;
byte sa = 0;
byte sb = 0;
byte sc = 0;
byte start_ = 0;
String action;


 void setup() { 
   Serial.begin (115200);
   start("WiFi Network","Password");// Connect to wifi, enter your details here
   pinMode (Motor_Forward,OUTPUT); 
   pinMode (Motor_Backward,OUTPUT);
   delay(50);
 } 
 
void loop()
{
if (start_!=1){
  waitUntilNewReq();    // Waits until a new request from python come
  action = getPath();
  action.remove(0,1);
  goal = action.toInt();
}
start_=1;
byte a = digitalRead( pinA );
byte b = digitalRead( pinB );
byte st = (b<<1) | a;
if ( encoderSt != st ) 
{
if ( (encoderSt==0 && st==2) || (encoderSt==1 && st==0) || (encoderSt==2 && st==3) || (encoderSt==3 && st==1) ) counter-- ;
else counter++;
encoderSt = st;
}
 error = goal-counter;
 if ((error<-10) && (sb!=1)){
  digitalWrite(Motor_Forward, HIGH);
  digitalWrite(Motor_Backward, LOW);
  sb=1;
  sa=1;
 }
 else if ((error>10) && (sc!=1)){
    digitalWrite(Motor_Forward, LOW);
    digitalWrite(Motor_Backward, HIGH);
    sc=1;
    sa=1;
 }
 else if ((abs(error)<=10) && (sa==1)){
  digitalWrite(Motor_Forward, LOW);
  digitalWrite(Motor_Backward, LOW);
  delay(10);
  sb=0;
  sc=0;
  start_=0;
  goal = 0;
 }
}
