int DCLamp1 = 3;
int DCLamp2 = 4;
int ACLamp1 = 5;
int ACLamp2 = 6;
int DigitalSoundSensor = 2;
int LampStatus = 0;
void setup()
{
  pinMode(DigitalSoundSensor, INPUT);
  pinMode(DCLamp1, OUTPUT);
  pinMode(DCLamp2, OUTPUT);
  pinMode(ACLamp1, OUTPUT);
  pinMode(ACLamp2, OUTPUT);
  digitalWrite(ACLamp1, LOW);
  digitalWrite(ACLamp2, LOW);
  digitalWrite(DCLamp1, LOW);
  digitalWrite(DCLamp2, LOW);
}

void loop() // run over and over
{
  if (digitalRead(DigitalSoundSensor) == HIGH)
  {
    if (LampStatus == 0)
    {
      LampStatus = 1;
      digitalWrite(ACLamp1, HIGH);
      digitalWrite(ACLamp2, LOW);
      digitalWrite(DCLamp1, HIGH);
      digitalWrite(DCLamp2, LOW);
    }
    else if (LampStatus == 1)
    {
      LampStatus = 2;
      digitalWrite(ACLamp1, HIGH);
      digitalWrite(ACLamp2, HIGH);
      digitalWrite(DCLamp1, HIGH);
      digitalWrite(DCLamp2, HIGH);
    }
    else if (LampStatus == 2)
    {
      LampStatus = 0;
      digitalWrite(ACLamp1, LOW);
      digitalWrite(ACLamp2, LOW);
      digitalWrite(DCLamp1, LOW);
      digitalWrite(DCLamp2, LOW);
    }
    delay(100);
  }
}
