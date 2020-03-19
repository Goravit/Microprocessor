#define led 7
#define intp 3
volatile byte state = LOW;

int count  = 0;
int toggle = 1;
int t = 1000;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(led, INPUT);
  attachInterrupt(digitalPinToInterrupt(intp),ISR_Callback,RISING);
  Serial.begin(9600);
}
void loop()
{
  if(count == 0)
  {
    digitalWrite(led, LOW);
  }
  else if(count == 1)
  {
    blink_1_sec(t);
  }
  else if(count == 2)
  {
    blink_2_sec(t);
  }
  else if(count == 3)
  {
    blink_3_sec(t);
  }
}

void ISR_Callback()
{
  count++;
}

void blink_1_sec(int i)
{
  digitalWrite(led,state);
  delay(t);
  state = !state;
}
void blink_2_sec(int i)
{
  digitalWrite(led,state);
  delay(t*2);
  state = !state;
}
void blink_3_sec(int i)
{
  digitalWrite(led,state);
  delay(t*3);
  state = !state;
}
