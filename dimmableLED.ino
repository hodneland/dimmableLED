int myVPin=A1;
int potVal;
float LEDVal;
int wait = 250;
int redPin = 6;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(myVPin, INPUT);
pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
potVal=analogRead(myVPin);
LEDVal = (255./1023.)*potVal;
analogWrite(redPin, LEDVal);
Serial.println(LEDVal);
delay(1000);
}
