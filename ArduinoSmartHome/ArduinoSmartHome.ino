void setup() {
 
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
pinMode(13, OUTPUT);
}

void loop() {
 
digitalWrite(12, HIGH);
digitalWrite(11, LOW);

delay(250);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);

delay(250);
digitalWrite(11, LOW);
digitalWrite(13, HIGH);
delay(250);
digitalWrite(13, LOW);}
