// C++ code
//
int ValorLido = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  ValorLido = analogRead(A0);
  Serial.println(ValorLido);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(ValorLido); // Wait for ValorLido millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(ValorLido); // Wait for ValorLido millisecond(s)
}
