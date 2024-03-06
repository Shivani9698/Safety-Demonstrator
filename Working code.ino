#define GLED1_pin 2
#define GLED2_pin 5
#define GLED3_pin 15
#define GLED4_pin 4
#define GLED5_pin 17

#define iron_pin 16


#define RLED1_pin 32
#define RLED2_pin 33
#define RLED3_pin 22
#define RLED4_pin 23
#define RLED5_pin 21


#define Phase_pin 25
#define Neutral_pin 26
#define Earth_pin 27
#define Shoe_pin 14
#define Hand_pin 19

void setup() {
  Serial.begin(115200);

  pinMode(GLED1_pin, OUTPUT);
  pinMode(GLED2_pin, OUTPUT);
    pinMode(GLED3_pin, OUTPUT);
  pinMode(GLED4_pin, OUTPUT);
    pinMode(GLED5_pin, OUTPUT);

  pinMode(iron_pin, OUTPUT);
  pinMode(RLED2_pin, OUTPUT);
    pinMode(RLED3_pin, OUTPUT);
      pinMode(RLED4_pin, OUTPUT);
        pinMode(RLED5_pin, OUTPUT);
        

  pinMode(Phase_pin, INPUT_PULLUP);
  pinMode(Neutral_pin, INPUT_PULLUP);
  pinMode(Earth_pin, INPUT_PULLUP);
  pinMode(Shoe_pin, INPUT_PULLUP);
  pinMode(Hand_pin, INPUT_PULLUP);
}

void loop() {
  if ((digitalRead(Phase_pin) == LOW) && (digitalRead(Neutral_pin) == LOW) &&
      (digitalRead(Earth_pin) == HIGH) && (digitalRead(Shoe_pin) == HIGH) && (digitalRead(Hand_pin) == HIGH)) {
    // Iron on, all off
    Serial.println("I am in IF condition");
    digitalWrite(iron_pin, HIGH);
    
   digitalWrite(RLED2_pin, LOW);
    digitalWrite(RLED3_pin, LOW);
    digitalWrite(RLED4_pin, LOW);
    digitalWrite(RLED4_pin, LOW);

    digitalWrite(GLED1_pin, LOW);
    digitalWrite(GLED2_pin, LOW);
    digitalWrite(GLED3_pin, LOW);
    digitalWrite(GLED4_pin, LOW);
    digitalWrite(GLED5_pin, LOW);

    

  } 
  else if ((digitalRead(Phase_pin) == LOW) && (digitalRead(Neutral_pin) == LOW) &&
           (digitalRead(Earth_pin) == HIGH) && (digitalRead(Shoe_pin) == HIGH) && (digitalRead(Hand_pin) == LOW)) {
    // All Red Light on AND Iron on
    Serial.println("ALL RED LIGHT ON AND IRON ON");

     digitalWrite(iron_pin, HIGH);
    
    digitalWrite(RLED1_pin, HIGH);
    digitalWrite(RLED2_pin, HIGH);
    digitalWrite(RLED3_pin, HIGH);
    digitalWrite(RLED4_pin, HIGH);
    digitalWrite(RLED4_pin, HIGH);

    digitalWrite(GLED1_pin, LOW);
    digitalWrite(GLED2_pin, LOW);
    digitalWrite(GLED3_pin, LOW);
    digitalWrite(GLED4_pin, LOW);
    digitalWrite(GLED5_pin, LOW);
  } 
  else if ((digitalRead(Phase_pin) == LOW) && (digitalRead(Neutral_pin) == LOW) &&
           (digitalRead(Earth_pin) == HIGH) && (digitalRead(Shoe_pin) == LOW) && (digitalRead(Hand_pin) == LOW)) {
    // All Red Light off on AND Iron on
    Serial.println("All Red Light off on AND Iron on");

         digitalWrite(iron_pin, HIGH);
    
    digitalWrite(RLED1_pin, LOW);
    digitalWrite(RLED2_pin, LOW);
    digitalWrite(RLED3_pin, LOW);
    digitalWrite(RLED4_pin, LOW);
    digitalWrite(RLED4_pin, LOW);

    digitalWrite(GLED1_pin, LOW);
    digitalWrite(GLED2_pin, LOW);
    digitalWrite(GLED3_pin, LOW);
    digitalWrite(GLED4_pin, LOW);
    digitalWrite(GLED5_pin, LOW);
  } 
  else if ((digitalRead(Phase_pin) == LOW) && (digitalRead(Neutral_pin) == LOW) &&
           (digitalRead(Earth_pin) == LOW) && (digitalRead(Shoe_pin) == LOW) && (digitalRead(Hand_pin) == LOW)) {
    // All green on and on AND Iron on
    Serial.println("All green on and on AND Iron on");
     digitalWrite(iron_pin, HIGH);
     
      digitalWrite(GLED1_pin, HIGH);
    digitalWrite(GLED2_pin, HIGH);
    digitalWrite(GLED3_pin, HIGH);
    digitalWrite(GLED4_pin, HIGH);
    digitalWrite(GLED5_pin, HIGH);
  } 
  else {
    Serial.println("I am in else condition");
        digitalWrite(RLED1_pin, LOW);
    digitalWrite(RLED2_pin, LOW);
    digitalWrite(RLED3_pin, LOW);
    digitalWrite(RLED4_pin, LOW);
    digitalWrite(RLED4_pin, LOW);

    digitalWrite(GLED1_pin, LOW);
    digitalWrite(GLED2_pin, LOW);
    digitalWrite(GLED3_pin, LOW);
    digitalWrite(GLED4_pin, LOW);
    digitalWrite(GLED5_pin, LOW);
  }

  delay(1000); // Adjust the delay if needed
}
