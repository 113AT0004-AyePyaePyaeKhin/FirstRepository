/*
  Fade

  This example shows how to fade an LED on pin 9 using the analogWrite()
  function.

  The analogWrite() function uses PWM, so if you want to change the pin you're
  using, be sure to use another PWM capable pin. On most Arduino, the PWM pins
  are identified with a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.

  This example code is in the public domain.

  https://docs.arduino.cc/built-in-examples/basics/Fade/
*/
const int red=9;
const int green=10;
const int blue=11;
int LED = 0;         // the PWM pin the LED is attached to
int brightness = 0;  // how bright the LED is
int fadeAmount = 5;  // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 to be an output:
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);

}

// the loop routine runs over and over again forever:
void loop() {
  // set the brightness of pin 9:
  if(LED==0){
    analogWrite(red, brightness);
    analogWrite(green, 255);
    analogWrite(blue, 255);
  }
  if(LED==1){
    analogWrite(red, 255);
    analogWrite(green, brightness);
    analogWrite(blue, 255);
  }
  if(LED==2){
    analogWrite(red, 255);
    analogWrite(green, 255);
    analogWrite(blue, brightness);
  }
  

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
    if(brightness>=255){
      LED=LED+1;
      if(LED>2)
      LED=0;
    }
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
}
