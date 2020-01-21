#define startPin 5
#define stoptPin 4
#define motorPin 3

void setup()
{
    // initialize pin mode
    pinMode(startPin, INPUT);
    pinMode(stoptPin, INPUT);
    pinMode(motorPin, OUTPUT);

    // initialize motor
    digitalWrite(motorPin, LOW);
}

void loop()
{
    if( digitalRead(startPin)){
        digitalWrite(motorPin, HIGH);
    }else if( digitalRead(stoptPin) ){
        digitalWrite(motorPin, LOW);
    }
}