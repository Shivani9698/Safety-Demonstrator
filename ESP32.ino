#define GLED1_pin 1
#define GLED2_pin 2
#define GLED3_pin 3
#define GLED4_pin 4
#define GLED5_pin 5
#define GLED6_pin 12
#define GLED7_pin 13
#define GLED8_pin 14

#define RLEDiron_pin 15
#define RLED8_pin 18
#define RLED7_pin 17
#define RLED6_pin 16
#define RLED5_pin 32
#define RLED4_pin 33
#define RLED3_pin 25
#define RLED2_pin 26
#define RLED1_pin 27
#define RLED9_pin 19
#define RLED10_pin 21

#define Phase_pin 22
#define Neutral_pin 23
#define Earth_pin 35
#define Hand_pin 34
#define Shoe_pin 39

#define ON 1
#define OFF 0
#define LON 1
#define LOFF 0

void setup() {
  pinMode(GLED1_pin, OUTPUT);
  pinMode(GLED2_pin, OUTPUT);
  pinMode(GLED3_pin, OUTPUT);
  pinMode(GLED4_pin, OUTPUT);
  pinMode(GLED5_pin, OUTPUT);
  pinMode(GLED6_pin, OUTPUT);
  pinMode(GLED7_pin, OUTPUT);
  pinMode(GLED8_pin, OUTPUT);
  
  pinMode(RLEDiron_pin, OUTPUT);
  pinMode(RLED1_pin, OUTPUT);
  pinMode(RLED2_pin, OUTPUT);
  pinMode(RLED3_pin, OUTPUT);
  pinMode(RLED4_pin, OUTPUT);
  pinMode(RLED5_pin, OUTPUT);
  pinMode(RLED6_pin, OUTPUT);
  pinMode(RLED7_pin, OUTPUT);
  pinMode(RLED8_pin, OUTPUT);
  pinMode(RLED9_pin, OUTPUT);
  pinMode(RLED10_pin, OUTPUT);
  
  pinMode(Phase_pin, INPUT);
  pinMode(Neutral_pin, INPUT);
  pinMode(Earth_pin, INPUT);
  pinMode(Hand_pin, INPUT);
  pinMode(Shoe_pin, INPUT);
}

void loop() {
  
   digitalWrite(RLEDiron_pin, LOFF);
    digitalWrite(RLED1_pin, LOFF);
    digitalWrite(RLED2_pin, LOFF);
    digitalWrite(RLED3_pin, LOFF);
    digitalWrite(RLED4_pin, LOFF);
    digitalWrite(RLED5_pin, LOFF);
    digitalWrite(RLED6_pin, LOFF);
    digitalWrite(RLED7_pin, LOFF);
    digitalWrite(RLED8_pin, LOFF);
    digitalWrite(RLED9_pin, LOFF);
    digitalWrite(RLED10_pin, LOFF);
    digitalWrite(GLED1_pin, LOFF);
    digitalWrite(GLED2_pin, LOFF);
    digitalWrite(GLED3_pin, LOFF);
    digitalWrite(GLED4_pin, LOFF);
    digitalWrite(GLED5_pin, LOFF);
    digitalWrite(GLED6_pin, LOFF);
    digitalWrite(GLED7_pin, LOFF);
    digitalWrite(GLED8_pin, LOFF);
  
    if (digitalRead(Phase_pin) == ON && digitalRead(Neutral_pin) == ON && digitalRead(Earth_pin) == OFF && digitalRead(Shoe_pin) == OFF && digitalRead(Hand_pin) == OFF) {
      digitalWrite(RLEDiron_pin, LON);
      digitalWrite(RLED1_pin, LOFF);
    digitalWrite(RLED2_pin, LOFF);
    digitalWrite(RLED3_pin, LOFF);
    digitalWrite(RLED4_pin, LOFF);
    digitalWrite(RLED5_pin, LOFF);
    digitalWrite(RLED6_pin, LOFF);
    digitalWrite(RLED7_pin, LOFF);
    digitalWrite(RLED8_pin, LOFF);
    digitalWrite(RLED9_pin, LOFF);
    digitalWrite(RLED10_pin, LOFF);
    digitalWrite(GLED1_pin, LOFF);
    digitalWrite(GLED2_pin, LOFF);
    digitalWrite(GLED3_pin, LOFF);
    digitalWrite(GLED4_pin, LOFF);
    digitalWrite(GLED5_pin, LOFF);
    digitalWrite(GLED6_pin, LOFF);
    digitalWrite(GLED7_pin, LOFF);
    digitalWrite(GLED8_pin, LOFF);
    }
     if (digitalRead(Phase_pin) == ON && digitalRead(Neutral_pin) == ON && digitalRead(Earth_pin) == OFF && digitalRead(Shoe_pin) == OFF && digitalRead(Hand_pin) == ON) {
      digitalWrite(RLEDiron_pin, LON);
      digitalWrite(RLED1_pin, LON);
      delay(500); //wait for 500 milliseconds
      digitalWrite(RLED2_pin, LON);
      delay(500); //wait for 500 milliseconds
      digitalWrite(RLED3_pin, LON);
      delay(500); //wait for 500 milliseconds
      digitalWrite(RLED4_pin, LON);
      delay(500); //wait for 500 milliseconds
      digitalWrite(RLED5_pin, LON);
      delay(500); //wait for 500 milliseconds
      digitalWrite(RLED6_pin, LON);
      delay(500); //wait for 500 milliseconds
      digitalWrite(RLED7_pin, LON);
      delay(500); //wait for 500 milliseconds
      digitalWrite(RLED8_pin, LON);
      delay(500); //wait for 500 milliseconds
      digitalWrite(RLED9_pin, LON);
      delay(500); //wait for 500 milliseconds
      digitalWrite(RLED10_pin, LON);
      delay(500); //wait for 500 milliseconds
    }
    else if (digitalRead(Phase_pin) == ON && digitalRead(Neutral_pin) == ON && digitalRead(Earth_pin) == OFF && digitalRead(Shoe_pin) == ON && digitalRead(Hand_pin) == ON) {
      digitalWrite(RLEDiron_pin, LON);
      
      
    }
    else if (digitalRead(Phase_pin) == ON && digitalRead(Neutral_pin) == ON && digitalRead(Earth_pin) == ON&& digitalRead(Shoe_pin) == OFF && digitalRead(Hand_pin) == OFF) {
      digitalWrite(RLEDiron_pin, LON);
      digitalWrite(GLED1_pin, LON);
      delay(500); //wait for 500 milliseconds
      digitalWrite(GLED2_pin, LON);
      delay(500); //wait for 500 milliseconds
      digitalWrite(GLED3_pin, LON);
      delay(500); //wait for 500 milliseconds
      digitalWrite(GLED4_pin, LON);
      delay(500); //wait for 500 milliseconds
      digitalWrite(GLED5_pin, LON);
      delay(500); //wait for 500 milliseconds
      digitalWrite(GLED6_pin, LON);
      delay(500); //wait for 500 milliseconds
      digitalWrite(GLED7_pin, LON);
      delay(500); //wait for 500 milliseconds
      digitalWrite(GLED8_pin, LON);
      delay(500); //wait for 500 milliseconds
    }
    else {
      digitalWrite(RLEDiron_pin, LOFF);
      digitalWrite(RLED1_pin, LOFF);
      digitalWrite(RLED2_pin, LOFF);
      digitalWrite(RLED3_pin, LOFF);
      digitalWrite(RLED4_pin, LOFF);
      digitalWrite(RLED5_pin, LOFF);
      digitalWrite(RLED6_pin, LOFF);
      digitalWrite(RLED7_pin, LOFF);
      digitalWrite(RLED8_pin, LOFF);
      digitalWrite(RLED9_pin, LOFF);
      digitalWrite(RLED10_pin, LOFF);
      digitalWrite(GLED1_pin, LOFF);
      digitalWrite(GLED2_pin, LOFF);
      digitalWrite(GLED3_pin, LOFF);
      digitalWrite(GLED4_pin, LOFF);
      digitalWrite(GLED5_pin, LOFF);
      digitalWrite(GLED6_pin, LOFF);
      digitalWrite(GLED7_pin, LOFF);
      digitalWrite(GLED8_pin, LOFF);
    }
  
}
