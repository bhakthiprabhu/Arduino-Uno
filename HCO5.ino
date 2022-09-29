char inputByte;
void setup() {
 Serial.begin(9600);
 pinMode(13,OUTPUT);
}
void loop() {
  inputByte= Serial.read();
  if (inputByte=='Z'){
    digitalWrite(13,HIGH);
  }
  else if (inputByte=='z'){
    digitalWrite(13,LOW);
  } 
}
