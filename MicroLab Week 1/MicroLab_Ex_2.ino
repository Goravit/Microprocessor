void setup()
{
  DDRD = 0xFF ;
  DDRB = 0xFF ; 
}

void loop()
{
  PORTD = 0x01;
  int i = 0;
  while(i < 8)
  {
    if(PINB == 0x01)
    {
    PORTD = 1 << i;
    delay(200);
    i++;
    }
  }
}
