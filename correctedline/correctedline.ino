#define lmotorf 9 
#define lmotorb 6
#define rmotorf 5
#define rmotorb 3


void setup() {

pinMode(lmotorf,OUTPUT);
pinMode(rmotorf,OUTPUT);
pinMode(lmotorb,OUTPUT);
pinMode(rmotorb,OUTPUT);
pinMode(13,INPUT);
pinMode(7,INPUT);
pinMode(10,INPUT);
pinMode(8,INPUT);

}

void loop() {
  
int l1sensor=digitalRead(13);
int l2sensor=digitalRead(7);
int r1sensor=digitalRead(10);
int r2sensor=digitalRead(8);

if((l1sensor==HIGH)&&(r1sensor==HIGH)&&(l2sensor==HIGH)&&(r2sensor==HIGH))
{
// go forward
analogWrite(lmotorf,255);
analogWrite(rmotorf,255);
analogWrite(lmotorb,0);
analogWrite(rmotorb,0);
}
else if(((l1sensor==HIGH)||(l2sensor==HIGH))&& ((r1sensor==LOW)||(r2sensor==LOW)))
{
// turn right
analogWrite(lmotorf,255);
analogWrite(rmotorf,0);
analogWrite(lmotorb,0);
analogWrite(rmotorb,255);
}
else if(((l1sensor==LOW)||(l2sensor==LOW))&&((r1sensor==HIGH)||(r2sensor==HIGH)))
{
// turn left
analogWrite(lmotorf,0);
analogWrite(rmotorf,255);
analogWrite(lmotorb,255);
analogWrite(rmotorb,0);
}
else
{
analogWrite(lmotorf,0);
analogWrite(rmotorf,0);
analogWrite(lmotorb,0);
analogWrite(rmotorb,0);
}

}

