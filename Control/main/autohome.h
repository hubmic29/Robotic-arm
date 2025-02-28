/*
int es2 = 39;
int es3 = 40;
int es4 = 41;
int es5 = 42;

void autohomeINPUT(){
 pinMode(es2, INPUT);
 pinMode(es3, INPUT);
 pinMode(es4, INPUT);
 pinMode(es5, INPUT);
}


void autohome(){
//silnik2(300, 500, HIGH);

//silnik4(1000, 500, LOW);
//silnik5(50, 15000, HIGH);


if ((digitalRead(es2) == LOW))
  {
    digitalWrite(dirPinA, LOW); // Ustaw kierunek
      for (int x = 0; x < 1; x++) 
      {
        digitalWrite(stepPinA, HIGH);
        delayMicroseconds(500);
        digitalWrite(stepPinA, LOW);
        delayMicroseconds(500);
      }
  }
  
}
*/

