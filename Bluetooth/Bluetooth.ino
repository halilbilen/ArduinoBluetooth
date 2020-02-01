//int data=0;
int pin=7;
int sensor=0;
void setup() {
Serial.begin(9600);
pinMode(pin,OUTPUT);

}

void loop() {
  sensor=analogRead(A0);
  /*if(Serial.available()){ 
    data=Serial.read();
  }*/
  if(sensor>100)
  {
    digitalWrite(pin,HIGH);
    Serial.println(sensor);
    delay(300);
  }
  else{
    digitalWrite(pin,LOW);
  }

}
