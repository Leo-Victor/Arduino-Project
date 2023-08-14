
// C++ code
//
void setup()
{
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, INPUT);
  pinMode(7, OUTPUT);
  pinMode(6, INPUT);
  pinMode(6, OUTPUT);
}
void sinaleira1(){
  int o=0;
  int l=0;
  digitalWrite(10, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(11, HIGH);
  botoes();
  for(0;o<5000;o++){
  delay(1);
  botoes();
  }
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
    digitalWrite(13, LOW);

  for(0;l<2000;l++){
  delay(1);
  botoes();
  }
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
}
void sinaleira2(){
  int m =0;
  int n =0;
  digitalWrite(10, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(11, LOW);
  for(0;m<5000;m++){
  delay(1);
  botoes();
  }
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  
  for(0;n<2000;n++){
  delay(1);
  botoes();
  }
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  
}
void botao1(){
  digitalWrite(7, HIGH);
  if(digitalRead(7)<1){
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10, HIGH);
digitalWrite(9, LOW);
digitalWrite(8, LOW);
delay(5000);
digitalWrite(11, LOW);
digitalWrite(13, HIGH);
  }
}
void botao2(){
  digitalWrite(6, HIGH);
  if(digitalRead(6)<1){
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
delay(5000);
digitalWrite(8, LOW);
digitalWrite(10, HIGH);
  }
}
void botoes(){
   botao2();
   botao1();
}

void loop(){
    sinaleira1();
    sinaleira2();
}
