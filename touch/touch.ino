#define startPin 2
#define stoptPin 3
#define motorPin 13

void setup()
{
    // initialize pin mode
    pinMode(startPin, INPUT_PULLUP);
    pinMode(stoptPin, INPUT_PULLUP);
    pinMode(motorPin, OUTPUT);

    // initialize motor
    digitalWrite(motorPin, LOW);
}

void loop()
{
    if( digitalRead(startPin) == 0){
        digitalWrite(motorPin, HIGH);
    }else if( digitalRead(stoptPin) == 0){
        digitalWrite(motorPin, LOW);
    }
}
