int clk_pin = 5; //SHCP
int latch_pin = 6; //STCP
int data_pin = 4; //DS

int clk_pin2 = 13; //SHCP
int latch_pin2 = 11; //STCP
int data_pin2 = 10; //DS



void setup()
{
  pinMode(clk_pin, OUTPUT);
  pinMode(latch_pin, OUTPUT);
  pinMode(data_pin, OUTPUT);
  pinMode(clk_pin2, OUTPUT);
  pinMode(latch_pin2, OUTPUT);
  pinMode(data_pin2, OUTPUT);
}

void loop()
{
  int data=0b10000000;
   for(int i=0;i<16;i++){
     digitalWrite(data_pin, (data>>(i))&0x01);                                                                                     
     digitalWrite(clk_pin, HIGH);
     delay(100);
     digitalWrite(clk_pin, LOW);
     delay(100);
       digitalWrite(latch_pin, HIGH);
     delay(10);
     digitalWrite(latch_pin, LOW);
     delay(10);
     digitalWrite(data_pin2, (data>>(i))&0x01);                                                                                     
     digitalWrite(clk_pin2, HIGH);
     delay(100);
     digitalWrite(clk_pin2, LOW);
     delay(100);
       digitalWrite(latch_pin2, HIGH);
     delay(10);
     digitalWrite(latch_pin2, LOW);
     delay(10);
   }
}
