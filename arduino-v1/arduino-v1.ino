const int pin_sensor = 3;
const int pin_buzzer = 4;
const int beep_frequency = 1000;
int value = 0;

void beep(int interval)
{
  tone(pin_buzzer, beep_frequency, interval);  
}

void alert()
{  
  for(int i=0; i<20; i++)
  {
    tone(pin_buzzer, beep_frequency);
    delay(250);
    noTone(pin_buzzer);
    delay(250);
  }
}

void setup() {
  // put your setup code here, to run once:
  pinMode(pin_sensor, INPUT);
  pinMode(pin_buzzer, OUTPUT);    
  beep(200);  
  delay(200);
  noTone(pin_buzzer);  
  beep(200);  
  delay(200);
}

void loop() {
  // put your main code here, to run repeatedly:
  value=digitalRead(pin_sensor);
  if (value == HIGH)
  {
    alert();
  }
}
