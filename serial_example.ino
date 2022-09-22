int ledpin=13;
void setup() {
  pinMode(ledpin, OUTPUT);
  Serial.begin(9600);
}
void loop() {        
  String r = Serial.readString();
  if(r!= "")
  {
    if(r=="on")
    {
      digitalWrite(ledpin, HIGH);  
      Serial.println("led on");
    }
    else if(r=="off")
    {
      digitalWrite(ledpin, LOW);  
      Serial.println("led off");   
    }
    else
    {
      Serial.println("invalid choice");
    }
  }
}
