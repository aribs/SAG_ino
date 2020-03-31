//SAG.INO  Simple Automated Garden in Arduino
//Author Alejo Ribes Baldoví

//Declarated Pins

//Higrometers
const int hig0      = A0;

//RGB Diode Advisor Led
const int led1Red   = 3;
const int led1Green = 6;


void setup() {
  Serial.begin(9600);
  // Setup Leds
  pinMode (led1Red, OUTPUT);
  pinMode (led1Green, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int humidity1 = analogRead(hig0);
  paintStatus(humidity1, led1Red, led1Green);
  Serial.print(humidity1);
  Serial.print("\n");
  //analogWrite(led1Red, 255);
  delay(1000);

}
void paintStatus (int humidity, int red, int green){
  if(humidity > 400){
      Serial.print("enter here\n");
      analogWrite(red, 255);
      analogWrite(green, 0);
  }
  else{
     analogWrite(red, 0);
     analogWrite(green, 255);
   } 
 };
