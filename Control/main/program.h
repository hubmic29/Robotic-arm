
void program1(){
  delay(1000);
chwytak.write(0);
silnik2(1800, 200, LOW);
silnik4(10000, 300, LOW);
silnik3(2000, 300, HIGH);
silnik4(10000, 300, LOW);
silnik2(200, 300, LOW);
silnik4(2000, 300, LOW);

chwytak.write(75);
delay(2000);
silnik4(20000, 300, HIGH);
silnik5(120, 15000, LOW);
silnik4(20000, 300, LOW);
delay(1000);
chwytak.write(0);
delay(1000);
silnik4(20000, 300, HIGH);
silnik5(120, 15000, HIGH);
delay(3000);
silnik5(120, 15000, HIGH);
}