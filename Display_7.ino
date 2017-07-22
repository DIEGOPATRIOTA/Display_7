/**
 * Projetos Arduino
 * 
 * @author diego patriota
 * @link https://github.com/diegopatriota
 * 19/05/2016 
 */

// Código binário de 1 a 9
//-------------------------------------
// 1,1,1,1,1,1,0 = 0
// 0,1,1,0,0,0,0 = 1
// 1,1,0,1,1,0,1 = 2
// 1,1,1,1,0,0,1 = 3
// 0,1,1,0,0,1,1 = 4
// 1,0,1,1,0,1,1 = 5
// 1,0,1,1,1,1,1 = 6
// 1,1,1,0,0,0,0 = 7
// 1,1,1,1,1,1,1 = 8
// 1,1,1,0,0,1,1 = 9
//-------------------------------------


//VARIÁVEL CONSTANTE
const int buzzer = 10;

void setup(){

pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);

pinMode(buzzer,OUTPUT);



}

void ponto(){
  digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(4,0);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(7,0);
  digitalWrite(8,0);
  digitalWrite(9,1);
}

void nove(){
  digitalWrite(2,1);
  digitalWrite(3,1);
  digitalWrite(4,1);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(7,1);
  digitalWrite(8,1);
}

void oito(){
  digitalWrite(2,1);
  digitalWrite(3,1);
  digitalWrite(4,1);
  digitalWrite(5,1);
  digitalWrite(6,1);
  digitalWrite(7,1);
  digitalWrite(8,1);
}

void sete(){
  digitalWrite(2,1);
  digitalWrite(3,1);
  digitalWrite(4,1);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(7,0);
  digitalWrite(8,0);
}

void seis(){
  digitalWrite(2,1);
  digitalWrite(3,0);
  digitalWrite(4,1);
  digitalWrite(5,1);
  digitalWrite(6,1);
  digitalWrite(7,1);
  digitalWrite(8,1);
}

void cinco(){
  digitalWrite(2,1);
  digitalWrite(3,0);
  digitalWrite(4,1);
  digitalWrite(5,1);
  digitalWrite(6,0);
  digitalWrite(7,1);
  digitalWrite(8,1);
}

void quatro(){
  digitalWrite(2,0);
  digitalWrite(3,1);
  digitalWrite(4,1);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(7,1);
  digitalWrite(8,1);
}

void tres(){
  digitalWrite(2,1);
  digitalWrite(3,1);
  digitalWrite(4,1);
  digitalWrite(5,1);
  digitalWrite(6,0);
  digitalWrite(7,0);
  digitalWrite(8,1);
}

void dois(){
  digitalWrite(2,1);
  digitalWrite(3,1);
  digitalWrite(4,0);
  digitalWrite(5,1);
  digitalWrite(6,1);
  digitalWrite(7,0);
  digitalWrite(8,1);
}

void um(){
  digitalWrite(2,0);
  digitalWrite(3,1);
  digitalWrite(4,1);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(7,0);
  digitalWrite(8,0);
}

void zero(){
  digitalWrite(2,1);
  digitalWrite(3,1);
  digitalWrite(4,1);
  digitalWrite(5,1);
  digitalWrite(6,1);
  digitalWrite(7,1);
  digitalWrite(8,0);
}

void loop(){

int tempoPonto = 500;  
  
nove();
tone(buzzer,1500);
delay(1000);
noTone(buzzer);
ponto();
delay(tempoPonto);

oito();
tone(buzzer,1500);
delay(1000);
noTone(buzzer);
ponto();
delay(tempoPonto);

sete();
tone(buzzer,1500);
delay(1000);
noTone(buzzer);
ponto();
delay(tempoPonto);

seis();
tone(buzzer,1500);
delay(1000);
noTone(buzzer);
ponto();
delay(tempoPonto);

cinco();
tone(buzzer,1500);
delay(1000);
noTone(buzzer);
ponto();
delay(tempoPonto);

quatro();
tone(buzzer,1500);
delay(1000);
noTone(buzzer);
ponto();
delay(tempoPonto);

tres();
tone(buzzer,1500);
delay(1000);
noTone(buzzer);
ponto();
delay(tempoPonto);

dois();
tone(buzzer,1500);
delay(1000);
noTone(buzzer);
ponto();
delay(tempoPonto);

um();
tone(buzzer,1500);
delay(1000);
noTone(buzzer);
ponto();
delay(tempoPonto);

zero();
tone(buzzer,1500);
delay(1000);
noTone(buzzer);
ponto();
delay(tempoPonto);

ponto();
tone(buzzer,1500);
delay(1000);
noTone(buzzer);
ponto();
delay(tempoPonto);

}


