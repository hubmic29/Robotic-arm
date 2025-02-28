//axis1------------------------------------------------------------------
#define dirPin1    22
#define stepPin1   24
#define enablePin1 26


//axis2------------------------------------------------------------------
#define dirPin2    28
#define stepPin2   30
#define enablePin2 32

//axis3------------------------------------------------------------------
#define dirPin3    34
#define stepPin3   36
#define enablePin3 38


//axis4------------------------------------------------------------------
#define dirPin4    23
#define stepPin4   25
#define enablePin4 27

//axis5------------------------------------------------------------------
#define dirPin5    29
#define stepPin5   31
#define enablePin5 33

#define dirPinA    34
#define stepPinA   36
#define enablePinA 38


void  silnik1(int kroki, int predkosc, char kierunek) {
  digitalWrite(dirPin1, kierunek); // Ustaw kierunek
  for (int x = 0; x < kroki; x++) {
        digitalWrite(stepPin1, HIGH);
        delayMicroseconds(predkosc);
        digitalWrite(stepPin1, LOW);
        delayMicroseconds(predkosc);
      }

}


void silnik2(int kroki, int predkosc, char kierunek) {
  digitalWrite(dirPin2, kierunek); // Ustaw kierunek
  for (int x = 0; x < kroki; x++) {
        digitalWrite(stepPin2, HIGH);
        delayMicroseconds(predkosc);
        digitalWrite(stepPin2, LOW);
        delayMicroseconds(predkosc);
      }

}

void silnik3(int kroki, int predkosc, char kierunek) {
  digitalWrite(dirPin3, kierunek); // Ustaw kierunek
  for (int x = 0; x < kroki; x++) {
        digitalWrite(stepPin3, HIGH);
        delayMicroseconds(predkosc);
        digitalWrite(stepPin3, LOW);
        delayMicroseconds(predkosc);
      }

}


void silnik4(int kroki, int predkosc, char kierunek) {
  digitalWrite(dirPin4, kierunek); // Ustaw kierunek
  for (int x = 0; x < kroki; x++) {
        digitalWrite(stepPin4, HIGH);
        delayMicroseconds(predkosc);
        digitalWrite(stepPin4, LOW);
        delayMicroseconds(predkosc);
      }

}





void silnik5(int kroki, int predkosc, char kierunek) {
  digitalWrite(dirPin5, kierunek); // Ustaw kierunek
  for (int x = 0; x < kroki; x++) {
        digitalWrite(stepPin5, HIGH);
        delayMicroseconds(predkosc);
        digitalWrite(stepPin5, LOW);
        delayMicroseconds(predkosc);
      }

}

