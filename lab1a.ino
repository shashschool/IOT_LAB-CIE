// C++ code
int leds[5]={2,3,4,5,6};
void setup()
{
  
  for(int i=0;i<=6;i++){
  pinMode(leds[i], OUTPUT);
  }
}

void loop(){
  for(int i=0;i<=6;i++){
  digitalWrite(leds[i], HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(leds[i], LOW);
  delay(100); // Wait for 1000 millisecond(s)
  }
  for(int i=6;i>=0;i--){
  digitalWrite(leds[i], HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(leds[i], LOW);
  delay(100); // Wait for 1000 millisecond(s)
  }
  
}