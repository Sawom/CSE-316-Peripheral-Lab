void setup() {
  // put your setup code here, to run once:
  for (int i = 1; i <= 7; i++){
    pinMode(i, OUTPUT);
  }
  pinMode(12, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int variable = digitalRead(12);
  if (variable == 0)
  {
    int randomNumber = random(1, 6);
    switch(randomNumber)
    {
      case 1:
        zero();
        break;
      case 2:
        one();
        break;
      case 3:
        two();
        break;
      case 4:
        three();
        break;
      case 5:
        four();
        break;
      case 6:
        five();
        break;
      case 7:
        six();
        break;
      case 8:
        seven();
        break;
      case 9:
        eight();
        break;
      case 10:
        nine();
        break;
    }
  }
}
void zero()
{
  digitalWrite(1, 1);
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 0);
  delay(350);
}
void one()
{
  digitalWrite(1, 0);
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  delay(350);
}
void two()
{
  digitalWrite(1, 1);
  digitalWrite(2, 1);
  digitalWrite(3, 0);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 0);
  digitalWrite(7, 1);
  delay(350);
}
void three()
{
  digitalWrite(1, 1);
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 1);
  delay(350);
}
void four()
{
  digitalWrite(1, 0);
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  delay(350);
}
void five()
{
  digitalWrite(1, 1);
  digitalWrite(2, 0);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  digitalWrite(5, 0);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  delay(350);
}
void six()
{
  digitalWrite(1, 1);
  digitalWrite(2, 0);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  delay(350);
}
void seven()
{
  digitalWrite(1, 1);
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  delay(350);
}
void eight()
{
  digitalWrite(1, 1);
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  delay(350);
}
void nine()
{
  digitalWrite(1, 1);
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  delay(350);
}
