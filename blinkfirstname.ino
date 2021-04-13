const pin_t MY_LED = D7;
SYSTEM_THREAD(ENABLED); 

void setup() {
    pinMode(MY_LED, OUTPUT);
}

void Blink_H()
{
    for (int i=0; i < 4; i++)
    {
        digitalWrite(MY_LED, HIGH);
        delay(1s);
        digitalWrite(MY_LED, LOW);
        delay(1s);
    }
    delay(3s);
}

void Blink_O()
{
    for (int i = 0; i < 3; i++)
    {
        digitalWrite(MY_LED, HIGH);
        delay(3s);
        digitalWrite(MY_LED, LOW);
        delay(1s);
    }
    delay(3s);
}

void Blink_A()
{
    digitalWrite(MY_LED, HIGH);
    delay(1s);
    digitalWrite(MY_LED, LOW);
    delay(1s);
    digitalWrite(MY_LED, HIGH);
    delay(3s);
    digitalWrite(MY_LED, LOW);
    delay(3s);
}

void Blink_N()
{
    digitalWrite(MY_LED, HIGH);
    delay(3s);
    digitalWrite(MY_LED, LOW);
    delay(1s);
    digitalWrite(MY_LED, HIGH);
    delay(1s);
    digitalWrite(MY_LED, LOW);
    delay(3s);
}

void Blink_G()
{
    for (int i = 0; i < 2; i++)
    {
        digitalWrite(MY_LED, HIGH);
        delay(3s);
        digitalWrite(MY_LED, LOW);
        delay(1s);
    }
    digitalWrite(MY_LED, HIGH);
    delay(1s);
    digitalWrite(MY_LED, LOW);
    delay(3s);
}

void BlinkFirstName()
{
    Blink_H();
    Blink_O();
    Blink_A();
    Blink_N();
    Blink_G();
    
}

void loop() {
    BlinkFirstName();
}