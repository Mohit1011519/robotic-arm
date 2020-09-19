#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

int potpin = 0;
int switch1 = 1;
int switch2 = 2;
int switch3 = 4;
int switch4 = 7;
int switch5 = 8;
int valp;
int val1 = 0;
int val2 = 0;
int val3 = 0;
int val4 = 0;
int val5 = 0;

void setup()
{
 servo1.attach(5);
 servo2.attach(6);
 servo3.attach(9);
 servo4.attach(10);
 servo5.attach(11);
}

void loop()
{
 val1 = digitalRead(switch1);
 if (val1 == HIGH){
   valp = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
   valp = map(valp, 0, 1023, 0, 179);     // scale it to use it with the servo (value between 0 and 180)
   servo1.write(valp);                  // sets the servo position according to the scaled value
   delay(15);
 }
 val2 = digitalRead(switch2);
 if (val2 == HIGH){
   valp = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
   valp = map(valp, 0, 1023, 0, 179);     // scale it to use it with the servo (value between 0 and 180)
   servo2.write(valp);                  // sets the servo position according to the scaled value
   delay(15);
 }
 val3 = digitalRead(switch3);
 if (val3 == HIGH){
   valp = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
   valp = map(valp, 0, 1023, 0, 179);     // scale it to use it with the servo (value between 0 and 180)
   servo3.write(valp);                  // sets the servo position according to the scaled value
   delay(15);
 }
 val4 = digitalRead(switch4);
 if (val4 == HIGH){
   valp = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
   valp = map(valp, 0, 1023, 0, 179);     // scale it to use it with the servo (value between 0 and 180)
   servo4.write(valp);                  // sets the servo position according to the scaled value
   delay(15);
 }
 val5 = digitalRead(switch5);
 if (val5 == HIGH){
   valp = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
   valp = map(valp, 0, 1023, 0, 179);     // scale it to use it with the servo (value between 0 and 180)
   servo5.write(valp);                  // sets the servo position according to the scaled value
   delay(15);
 }
}
