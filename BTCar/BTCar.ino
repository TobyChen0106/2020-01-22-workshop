#include <SoftwareSerial.h>
SoftwareSerial BT(10, 11); // rx, tx

void setup()
{
    Serial.begin(9600);
    BT.begin(9600);
    Serial.println("BT is ready!");
}

void loop()
{
    if (BT.available() > 0)
    {
        char pp = BT.read();
        Serial.println(pp);

        switch (pp)
        {
        case 'f': //Forward
            forward();
            break;
        case 'b': //Back
            backward();
            break;
        case 'l': //Turn Left
            turnleft();
            break;
        case 'r': //Turn Right
            turnright();
            break;
        case 's': //Stop
            carstop();
            break;
        }
    }
}

void forward(){
    Serial.println("forward");
}

void backward(){
    Serial.println("backward");
}

void turnleft(){
    Serial.println("turnleft");
}

void turnright(){
    Serial.println("turnright");
}

void carstop(){
    Serial.println("carstop");
}
