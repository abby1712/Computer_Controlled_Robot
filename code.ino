int LMT1=5,LMT2=6,RMT1=11,RMT2=10;
int i;
void setup()
{
    pinMode(LMT1,OUTPUT);
    pinMode(LMT2,OUTPUT);
    pinMode(RMT1,OUTPUT);
    pinMode(RMT2,OUTPUT);
    Serial.begin(9600);
}
void loop()
{
  i=Serial.read();
 if(i=='F')
 {
   digitalWrite(LMT1,HIGH);
   digitalWrite(LMT2,LOW);
   digitalWrite(RMT1,HIGH);
   digitalWrite(RMT2,LOW);
 }  
else if(i=='B')
 {
   digitalWrite(LMT1,LOW);
   digitalWrite(LMT2,HIGH);
   digitalWrite(RMT1,LOW);
   digitalWrite(RMT2,HIGH);
 }
else if(i=='R')
 {
   
   digitalWrite(LMT1,HIGH);
   digitalWrite(LMT2,LOW);
   digitalWrite(RMT1,LOW);
   digitalWrite(RMT2,HIGH);
 }
 else if(i=='L')
 {
   digitalWrite(LMT1,LOW);
   digitalWrite(LMT2,HIGH);
   digitalWrite(RMT1,HIGH);
   digitalWrite(RMT2,LOW);
 }
 else if(i=='S')
 {
   
   digitalWrite(LMT1,LOW);
   digitalWrite(LMT2,LOW);
   digitalWrite(RMT1,LOW);
   digitalWrite(RMT2,LOW);
 }
} 
 
 
