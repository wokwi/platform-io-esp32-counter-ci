#define BTN 5

void setup()
{
  Serial.begin(115200);
  Serial.println("Pushbutton Counter");
  pinMode(BTN, INPUT_PULLUP);
}

void loop()
{
  static int count = 0;
  static int lastState = HIGH;
  int state = digitalRead(BTN);
  if (state != lastState)
  {
    if (state == LOW)
    {
      count++;
      Serial.print("Button pressed ");
      Serial.print(count);
      Serial.println(" times");
    }
    lastState = state;
  }
  delay(10);
}
