void setup() {
  // put your setup code here, to run once:
pinMode (13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13,HIGH);
delay (1000);
digitalWrite(13,LOW);
//delay(1000); // delay for 1 second
delay(900); //delay for 0.9 seconds
}
