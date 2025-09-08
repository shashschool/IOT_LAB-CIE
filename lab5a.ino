// C++ code
//
int value=0;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  value=analogRead(A0);
  Serial.println(value);
  if(value<600){
    digitalWrite(13,LOW);
    Serial.println("VERY WET");
  }
  else if(value>600 && value<800){
    Serial.println("MODERATE");
  }
  else if(value>800){
    digitalWrite(13,HIGH);
    Serial.println("DRY");
  }
}
