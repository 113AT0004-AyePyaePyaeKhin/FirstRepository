const int btn=2;
const int red=3;
const int green=4;
const int blue=5;

int btnState=1;
int LED=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);

  pinMode(btn,INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  btnState = digitalRead(btn);
  if(btnState == LOW){
    LED = LED+1;
    delay(100);
  }
  if(LED == 0){
    digitalWrite(red,HIGH);
    digitalWrite(green,HIGH);
    digitalWrite(blue,HIGH);
  }
  else if(LED == 1){
    digitalWrite(red,LOW);
    digitalWrite(green,HIGH);
    digitalWrite(blue,HIGH);
  }
  else if(LED == 2){
    digitalWrite(red,HIGH);
    digitalWrite(green,LOW);
    digitalWrite(blue,HIGH);
  }
  else if(LED == 3){
    digitalWrite(red,HIGH);
    digitalWrite(green,HIGH);
    digitalWrite(blue,LOW);
  }
  else if(LED == 4){
    digitalWrite(red,LOW);
    digitalWrite(green,LOW);
    digitalWrite(blue,HIGH);
  }else if(LED == 5){
    digitalWrite(red,LOW);
    digitalWrite(green,HIGH);
    digitalWrite(blue,LOW);
  }else if(LED == 6){
    digitalWrite(red,HIGH);
    digitalWrite(green,LOW);
    digitalWrite(blue,LOW);
  }else if(LED == 7){
    digitalWrite(red,LOW);
    digitalWrite(green,LOW);
    digitalWrite(blue,LOW);
  }else if(LED == 8){
    LED = 0;
  }
}
