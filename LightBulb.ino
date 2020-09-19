String voice;
#define relay1 2
#define relay2 3


void setup()
{
    Serial.begin(9600);
pinMode(relay1,OUTPUT);
pinMode(relay2,OUTPUT);
digitalWrite(relay1,HIGH);
digitalWrite(relay2,HIGH);
}

void loop() 
{
    while(Serial.available())
       {
        delay(10);
        char c;
        c = Serial.read();
        if(c =='#')
          {
          break;
          }
voice +=c;
}
if(voice.length()>0)
{
          if(voice=="*light on")
            {
              digitalWrite(relay1,LOW);
             
            }
          else if(voice=="*light off")
            {
              digitalWrite(relay1,HIGH);
            
              }
          
           voice="";
           
}            
}
