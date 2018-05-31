int x = 0 ;

void setup()
{
  pinMode( 2 , OUTPUT);
  pinMode( 3 , OUTPUT);
  pinMode( 4 , OUTPUT);
  pinMode( 5 , OUTPUT);
  pinMode( 6 , OUTPUT);
  pinMode( 7 , OUTPUT);
  pinMode( 8 , OUTPUT);
  pinMode( 9 , OUTPUT);
  Serial.begin(9600);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);

}

void loop()
{
  if (( ( Serial.available() ) > ( 0 ) ))
  {
   int x = Serial.read() ;
    switch(x)
    {
      case 'a':
        if(digitalRead(2)==HIGH)
        {
           digitalWrite(2, LOW);
        }
        else
        {
           digitalWrite(2, HIGH);
        }
        break;
      case 'b':
        if(digitalRead(3)==HIGH)
        {
           digitalWrite(3, LOW);
        }
        else
        {
           digitalWrite(3, HIGH);
        }  
        break;
      case 'c':
        if(digitalRead(4)==HIGH)
        {
           digitalWrite(4, LOW);
        }
        else
        {
           digitalWrite(4, HIGH);
        }
        break;
      case 'f':
        if(digitalRead(5)==HIGH)
        {
           digitalWrite(5, LOW);
        }
        else
        {
           digitalWrite(5, HIGH);
        }  
        break;
      case 'e':
        if(digitalRead(6)==HIGH)
        {
           digitalWrite(6, LOW);
        }
        else
        {
           digitalWrite(6, HIGH);
        }
        break;
      case 'd':
        if(digitalRead(7)==HIGH)
        {
           digitalWrite(7, LOW);
        }
        else
        {
           digitalWrite(7, HIGH);
        }  
        break;
      case 'g':
        if(digitalRead(8)==HIGH)
        {
           digitalWrite(8, LOW);
        }
        else
        {
           digitalWrite(8, HIGH);
        }
        break;
      case 'h':
        if(digitalRead(9)==HIGH)
        {
           digitalWrite(9, LOW);
        }
        else
        {
           digitalWrite(9, HIGH);
        }  
        break;    
    }
  }
}


