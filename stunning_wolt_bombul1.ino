int devicePin = 13;
void setup()
{
  pinMode(devicePin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Send 1 to turn ON, 0 to turn OFF");
}
void loop()
{
  if (Serial.available())
  {
    char command = Serial.read();
    if (command == '1')
    {
      digitalWrite(devicePin, HIGH);
      Serial.println("Device ON");
    }
    else if (command == '0')
    {
      digitalWrite(devicePin, LOW);
      Serial.println("Device OFF");
    }
    else
    {
      Serial.println("Invalid command");
    }
  }
}