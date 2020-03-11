const byte LEDs[] =
{2,3,4,5,8,9,10,11};
const byte Button=6;
const byte total = sizeof(LEDs);
int index = 0;
int i=0;
int j=0;
void setup() {
  pinMode(Button,INPUT);
for (byte i=0;i<total;i++) {
  pinMode(LEDs[i], OUTPUT); 
};
for (i=0;i<total;i++) 
    {
       digitalWrite(LEDs[i], LOW);
    }
}
void loop()
{
  boolean val = digitalRead(6);
  if(val){
            for(j=0;j<=1;j++)
            {
                    for (index=0; index <= 7; index++) 
                   { 
                           digitalWrite(LEDs[index], HIGH);
                   }
                   delay(100);
                   for (index=0; index <= 7; index++) 
                   { 
                           digitalWrite(LEDs[index], LOW);
                   }
                   delay(100);
            }
            for (index=0; index <= 7; index++) 
            { 
                    digitalWrite(LEDs[index], HIGH);
                    delay(100);
                    digitalWrite(LEDs[index], LOW);
            }
            
            for(j=0;j<=1;j++)
            {
                    for (index=0; index <= 7; index++) 
                   { 
                            digitalWrite(LEDs[index], HIGH);
                   }
                   delay(100);
                   for (index=0; index <= 7; index++) 
                   { 
                            digitalWrite(LEDs[index], LOW);
                   }
                   delay(100);
            }
          
                    for (index=7; index >=0; index--) 
                    { 
                           digitalWrite(LEDs[index], HIGH);
                           delay(100);
                           digitalWrite(LEDs[index], LOW);
                    }
          }
 else{
  for (index=0; index <= 7; index++) 
         { 
          digitalWrite(LEDs[index], HIGH);
          delay(100);
          digitalWrite(LEDs[index], LOW);
         }
  
          for (index=7; index >=0; index--) 
          { 
          digitalWrite(LEDs[index], HIGH);
          delay(100);
          digitalWrite(LEDs[index], LOW);
          }
  }
}
