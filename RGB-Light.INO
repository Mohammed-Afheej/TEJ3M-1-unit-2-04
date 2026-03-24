// Mohammed Afheej // Mar 4 2026 // RGB light program

// setting the variable for pin 11 , 12 , 13 int pin11 = 11; int pin12 = 12; int pin13 = 13;

// setting the pin 5 void setup() { pinMode(pin11, OUTPUT); pinMode(pin12, OUTPUT); pinMode(pin13, OUTPUT); }

// making the program in a loop and running the led for 1 second every time it runs void loop() {

// 1. red digitalWrite(pin11, HIGH); digitalWrite(pin12, LOW); digitalWrite(pin13, LOW); delay(1000);

// 2. green
digitalWrite(pin11, LOW);
digitalWrite(pin12, HIGH);
digitalWrite(pin13, LOW);
delay(1000);

// 3. blue
digitalWrite(pin11, LOW);
digitalWrite(pin12, LOW);
digitalWrite(pin13, HIGH);
delay(1000);

// 4. yellow (red + green)
digitalWrite(pin11, HIGH);
digitalWrite(pin12, HIGH);
digitalWrite(pin13, LOW);
delay(1000);

// 5. purple / magenta (red + blue)
digitalWrite(pin11, HIGH);
digitalWrite(pin12, LOW);
digitalWrite(pin13, HIGH);
delay(1000);

// 6. cyan (green + blue) -
digitalWrite(pin11, LOW);
digitalWrite(pin12, HIGH);
digitalWrite(pin13, HIGH);
delay(1000);

// 7. white (red + green + blue)
digitalWrite(pin11, HIGH);
digitalWrite(pin12, HIGH);
digitalWrite(pin13, HIGH);
delay(1000);
}
