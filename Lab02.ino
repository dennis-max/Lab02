const byte LEDs[] =
{2,3,4,5,6,7,8,9};
const byte total = sizeof(LEDs);
int index = 0;
int i=0;
int j=0;
void setup() {
  for (byte i=0;i<total;i++) {
pinMode(LEDs[i], OUTPUT);
      };
  for(i=0; i<total; i++)
  {
     digitalWrite(LEDs[i],LOW);
  }
}

void loop() {
  for (j=0; j<= 1; j++)
  {
    for ( index=0;index<=7;index++) 
    {
digitalWrite(LEDs[index], HIGH);
  }
  delay(100);
  for ( index=0;index<=7;index++) 
  {
    digitalWrite(LEDs[index], LOW);
    }
  delay(100);
  }

  
  for ( index=0;index<=7;index++)
  {
    digitalWrite(LEDs[index], HIGH);
    delay(100);
    digitalWrite(LEDs[index], LOW);
  }
for(j=0;j<=1;j++)
{
  for ( index=0;index<=7;index++)
  {
    digitalWrite(LEDs[index], HIGH);
  }
  delay(100);
  for ( index=0;index<=7;index++)
  {
    digitalWrite(LEDs[index], LOW);
  }
  delay(100);
  }

  
  for( index=7;index>=0;index--)
  {
    digitalWrite(LEDs[index], HIGH);
    delay(100);
    digitalWrite(LEDs[index], LOW);
    
  }
}
