const int btn=2;
const int red=3;
const int green=4;
const int blue=5;

int btnState=1;
int LED=0;

bool btnPressed = false;
String color = "LED";

void setup() {
  // put your setup code here, to run once:
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(btn,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  btnState = digitalRead(btn);
  Serial.print("Current Color: ");
  Serial.println(color);
  if(btnState == HIGH && !btnPressed){
    LED = LED+1;
    btnPressed = true;
  }
  if(btnState == LOW && btnPressed){
    btnPressed = false;
  }
  if(LED == 0){
    color = "LED OFF";
    digitalWrite(red,HIGH);
    digitalWrite(green,HIGH);
    digitalWrite(blue,HIGH);
  }
  else if(LED == 1){
    color = "RED";
    digitalWrite(red,LOW);
    digitalWrite(green,HIGH);
    digitalWrite(blue,HIGH);
  }
  else if(LED == 2){
    color = "Green";
    digitalWrite(red,HIGH);
    digitalWrite(green,LOW);
    digitalWrite(blue,HIGH);
  }
  else if(LED == 3){
    color = "Blue";
    digitalWrite(red,HIGH);
    digitalWrite(green,HIGH);
    digitalWrite(blue,LOW);
  }
  else if(LED == 4){
    color = "Yellow";
    digitalWrite(red,LOW);
    digitalWrite(green,LOW);
    digitalWrite(blue,HIGH);
  }else if(LED == 5){
    color = "Purple";
    digitalWrite(red,LOW);
    digitalWrite(green,HIGH);
    digitalWrite(blue,LOW);
  }else if(LED == 6){
    color = "Cyan";
    digitalWrite(red,HIGH);
    digitalWrite(green,LOW);
    digitalWrite(blue,LOW);
  }else if(LED == 7){
    color = "White";
    digitalWrite(red,LOW);
    digitalWrite(green,LOW);
    digitalWrite(blue,LOW);
  }else if(LED == 8){
    LED = 0;
  }
}
