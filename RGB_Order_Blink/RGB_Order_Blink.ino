const int btn=2;
const int red=3;
const int green=4;
const int blue=5;

int btnState=1;
int ledState=LOW;
int LED=0;

bool btnPressed = false;
String color = "LED";
unsigned long previousMillis = 0;
const long interval = 1000;
bool ledOrder = true;

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
  if(btnState == HIGH && !btnPressed){
    ledOrder = !ledOrder;
    btnPressed = true;
  }
  if(btnState == LOW && btnPressed){
    btnPressed = false;
  }
  unsigned long currentMillis = millis();
  if(currentMillis - previousMillis >=interval){
    previousMillis = currentMillis;
    if(ledOrder == true){
      LED = LED+1;
      if(LED >3)
        LED = 0;
    }else{
      LED = LED-1;
      if(LED<0)
        LED=3;
    }
  }
  if(LED == 0){
    //red
    digitalWrite(red,LOW);
    digitalWrite(green,HIGH);
    digitalWrite(blue,HIGH);
  }
  else if(LED == 1){
    //green
      digitalWrite(red,HIGH);
      digitalWrite(green,LOW);
      digitalWrite(blue,HIGH);
    
    
  }
  else if(LED == 2){
    //blue
      digitalWrite(red,HIGH);
      digitalWrite(green,HIGH);
      digitalWrite(blue,LOW);
    }
    
  
  else if(LED == 3){
    //white
      digitalWrite(red,LOW);
      digitalWrite(green,LOW);
      digitalWrite(blue,LOW);
    
    }    
  
}
