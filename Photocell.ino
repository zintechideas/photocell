//Follow us on other social media

https://www.facebook.com/zin.techideas.3
https://www.instagram.com/zintechideas/
https://twitter.com/Zintechideas
https://zintechideas.ir/

int sensor;
int led=13;

void setup(){
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop(){
  sensor = analogRead(A0); 
  
  Serial.print("Sensor Value= ");//zintechideas
  Serial.println(sensor);
  delay(300);
  
  if( sensor < 500){
    digitalWrite(led,LOW);
  }
  else{
    digitalWrite(led, HIGH);
  }
  
}
