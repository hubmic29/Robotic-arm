
//axis2
#define dirPin1 2
#define stepPin1 8
#define enablePin1 9


//axis4
#define dirPin2 26
#define stepPin2 24    
#define enablePin2 22

//axis3
#define dirPin3 38
#define stepPin3 36
#define enablePin3 34


//axis5
#define dirPin4 46
#define stepPin4 44
#define enablePin4 42
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


 pinMode(enablePin3, OUTPUT);
  pinMode(stepPin3, OUTPUT);
  pinMode(dirPin3, OUTPUT);
  digitalWrite(enablePin3, LOW);
  

   pinMode(enablePin4, OUTPUT);
  pinMode(stepPin4, OUTPUT);
  pinMode(dirPin4, OUTPUT);
  digitalWrite(enablePin4, LOW);
  
  Serial.begin(9600);
}




void loop() {


  int a = 200;
  digitalWrite(dirPin2, LOW); // Ustaw kierunek
  for (int x = 0; x < 10000; x++) {
        digitalWrite(stepPin2, HIGH);
        delayMicroseconds(a);
        digitalWrite(stepPin2, LOW);
        delayMicroseconds(a);
      }

      delay(500);

 digitalWrite(dirPin3, LOW); // Ustaw kierunek
  for (int x = 0; x < 17000; x++) {
        digitalWrite(stepPin3, HIGH);
        delayMicroseconds(a);
        digitalWrite(stepPin3, LOW);
        delayMicroseconds(a);
      }

      delay(500);


      digitalWrite(dirPin1, HIGH); // Ustaw kierunek
  for (int x = 0; x < 2800; x++) {
        digitalWrite(stepPin1, HIGH);
        delayMicroseconds(a);
        digitalWrite(stepPin1, LOW);
        delayMicroseconds(a);
      }

      delay(500);





       digitalWrite(dirPin2, HIGH); // Ustaw kierunek
  for (int x = 0; x < 10000; x++) {
        digitalWrite(stepPin2, HIGH);
        delayMicroseconds(a);
        digitalWrite(stepPin2, LOW);
        delayMicroseconds(a);
      }

      delay(500);

 digitalWrite(dirPin3, HIGH); // Ustaw kierunek
  for (int x = 0; x < 17000; x++) {
        digitalWrite(stepPin3, HIGH);
        delayMicroseconds(a);
        digitalWrite(stepPin3, LOW);
        delayMicroseconds(a);
      }

      delay(500);


      digitalWrite(dirPin1, LOW); // Ustaw kierunek
  for (int x = 0; x < 2800; x++) {
        digitalWrite(stepPin1, HIGH);
        delayMicroseconds(a);
        digitalWrite(stepPin1, LOW);
        delayMicroseconds(a);
      }
}
