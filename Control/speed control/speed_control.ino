#define dirPin1 2
#define stepPin1 8
#define enablePin1 9

#define dirPin2 26
#define stepPin2 24    
#define enablePin2 22


//#define dirPin1 26
//#define stepPin1 24
//#define enablePin1 22

//#define dirPin2 32
//#define stepPin2 30
//#define enablePin2 28

void setup() {
  pinMode(enablePin1, OUTPUT);
  pinMode(stepPin1, OUTPUT);
  pinMode(dirPin1, OUTPUT);
  digitalWrite(enablePin1, LOW); // Włącz silnik
  
  pinMode(enablePin2, OUTPUT);
  pinMode(stepPin2, OUTPUT);
  pinMode(dirPin2, OUTPUT);
  digitalWrite(enablePin2, LOW);

  Serial.begin(9600);
}

void silnik1(){
  
digitalWrite(dirPin1, HIGH); // Ustaw kierunek
  for (int x = 0; x < 4000; x++) {
        digitalWrite(stepPin1, HIGH);
        delayMicroseconds(100);
        digitalWrite(stepPin1, LOW);
        delayMicroseconds(100);
      }
      delay(5);
digitalWrite(dirPin1, HIGH); // Ustaw kierunek
  for (int x = 0; x < 500; x++) {
        digitalWrite(stepPin1, HIGH);
        delayMicroseconds(750); //predkość 
        digitalWrite(stepPin1, LOW);
        delayMicroseconds(750); // prędkość
      }
       delay(2000);




      digitalWrite(dirPin1, LOW); // kierunek obrotów
      for (int x = 0; x < 4000; x++) {
        digitalWrite(stepPin1, HIGH);
        delayMicroseconds(1000);
        digitalWrite(stepPin1, LOW);
        delayMicroseconds(1000);
      }
      delay(5);
         digitalWrite(dirPin1, LOW); // kierunek obrotów
      for (int x = 0; x < 500; x++) {
        digitalWrite(stepPin1, HIGH);
        delayMicroseconds(750);
        digitalWrite(stepPin1, LOW);
        delayMicroseconds(750);
      }


       delay(2000);


}

void silnik2(){
  digitalWrite(dirPin1, HIGH); // Ustaw kierunek
  for (int x = 0; x < 4000; x++) {
        digitalWrite(stepPin1, HIGH);
        delayMicroseconds(100);
        digitalWrite(stepPin1, LOW);
        delayMicroseconds(100);
      }
      delay(5);
digitalWrite(dirPin1, HIGH); // Ustaw kierunek
  for (int x = 0; x < 500; x++) {
        digitalWrite(stepPin1, HIGH);
        delayMicroseconds(750); //predkość 
        digitalWrite(stepPin1, LOW);
        delayMicroseconds(750); // prędkość
      }
       delay(2000);




      digitalWrite(dirPin1, LOW); // kierunek obrotów
      for (int x = 0; x < 4000; x++) {
        digitalWrite(stepPin1, HIGH);
        delayMicroseconds(1000);
        digitalWrite(stepPin1, LOW);
        delayMicroseconds(1000);
      }
      delay(5);
         digitalWrite(dirPin1, LOW); // kierunek obrotów
      for (int x = 0; x < 500; x++) {
        digitalWrite(stepPin1, HIGH);
        delayMicroseconds(750);
        digitalWrite(stepPin1, LOW);
        delayMicroseconds(750);
      }


       delay(2000);

digitalWrite(dirPin2, HIGH); // Ustaw kierunek
  for (int x = 0; x < 4000; x++) {
        digitalWrite(stepPin2, HIGH);
        delayMicroseconds(100);
        digitalWrite(stepPin2, LOW);
        delayMicroseconds(100);
      }
      delay(5);
digitalWrite(dirPin2, HIGH); // Ustaw kierunek
  for (int x = 0; x < 500; x++) {
        digitalWrite(stepPin2, HIGH);
        delayMicroseconds(750); //predkość 
        digitalWrite(stepPin2, LOW);
        delayMicroseconds(750); // prędkość
      }
       delay(2000);




      digitalWrite(dirPin2, LOW); // kierunek obrotów
      for (int x = 0; x < 4000; x++) {
        digitalWrite(stepPin2, HIGH);
        delayMicroseconds(1000);
        digitalWrite(stepPin2, LOW);
        delayMicroseconds(1000);
      }
      delay(5);
         digitalWrite(dirPin2, LOW); // kierunek obrotów
      for (int x = 0; x < 500; x++) {
        digitalWrite(stepPin2, HIGH);
        delayMicroseconds(750);
        digitalWrite(stepPin2, LOW);
        delayMicroseconds(750);
      }


       delay(2000);


}
void loop() {
 silnik1();
 //delay(5);
 silnik2();

}