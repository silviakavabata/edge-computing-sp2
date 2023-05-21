const int trigger = 4; 
const int echo    = 5; 
const int ledG    = 9;
const int ledY    = 12;
const int ledR    = 13;
float dist = 0;
void setup(){
  Serial.begin(9600);
  pinMode(trigger,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(ledG,OUTPUT);
  pinMode(ledY,OUTPUT);
  pinMode(ledR,OUTPUT);
}
void loop(){
  digitalWrite(trigger,LOW);
  delayMicroseconds(5);        
  digitalWrite(trigger,HIGH);  
  delayMicroseconds(10);      
  digitalWrite(trigger,LOW); 
  
  dist=pulseIn(echo,HIGH);      
  dist = dist/58;               
  Serial.print ("Distancia = ");
  Serial.print (dist);         
  Serial.print (" cm");         
  Serial.write (10);            
  delay (200); 
  
  if (dist>250){
    digitalWrite(ledG, HIGH);
    digitalWrite(ledY, LOW);
    digitalWrite(ledR, LOW);
  }
  else if (dist>150){
    digitalWrite(ledG, LOW);
    digitalWrite(ledY, HIGH);
    digitalWrite(ledR, LOW);
  }
  else if (dist<150){
    digitalWrite(ledG, LOW);
    digitalWrite(ledY, LOW);
    digitalWrite(ledR, HIGH);
  }
}