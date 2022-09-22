int redLed = 4; 
int blueLed = 3; 
int greenLed = 2;

void setup() {
  Serial.begin(9600);
  pinMode (redLed,OUTPUT);// Defined redLed as output.
  pinMode (blueLed,OUTPUT);// Defined blueLed as output.
  pinMode (greenLed,OUTPUT);// Defined greenLed as output.
}

void loop() {
if(Serial.available()>0)
 {
  String r = Serial.readString();
  if(r=="red")
  {
    digitalWrite (redLed,HIGH);
    Serial.println("red led");
  }
  else if(r=="blue")
  {
    digitalWrite (blueLed,HIGH);
    Serial.println("blue led");
  }
  else if(r=="green")
  {
    Serial.println("green led");
  }
  else
  {
     Serial.println("invalid choice");
  }
 }
}
