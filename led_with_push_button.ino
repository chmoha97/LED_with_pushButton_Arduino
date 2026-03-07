/* 
control the led using the push button
if button pressed == 0V ==> LED OFF
if button not pressed == 5V ==> LED ON
*/
int pushButton = 3;
int LED = 4;
int buttonState = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pushButton, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //read the state of button through digital pin 3
  if (digitalRead(pushButton) == 0) 
  {
    // if button pressed --> digital pin 4 == HIGH --> LED OFF
    digitalWrite(LED, LOW);  // set LED OFF
    Serial.println("button pressed"); // display the message in serial monitor
  }
  else 
  {
    // if button is not pressed --> digital pin 4 == HIGH --> LED ON
    digitalWrite(LED, HIGH);    // set the LED ON
    Serial.println("button not pressed"); // display the message in serial monitor
  }
  
}
