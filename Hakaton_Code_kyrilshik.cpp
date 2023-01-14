#define PIN_LED 13
#define PIN_PHOTO_SENSOR A0
#define PIN_PHOTO_SENSOR1 A1

void setup()
{
    Serial.begin(9600);
    pinMode (PIN_LED, OUTPUT);
}

void loop()
{
    int val = analogRead(PIN_PHOTO_SENSOR);
    Serial.println(val);
    int valli = analogRead(PIN_PHOTO_SENSOR1);
    Serial.println(valli);
    if((val > 500 && val < 900) && valli > 950)
    {
        digitalWrite(PIN_LED, HIGH);
    }else{
        digitalWrite(PIN_LED, LOW);
    }
}
