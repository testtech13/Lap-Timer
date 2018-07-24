/*
  Blink ir led
  Turns on an IR LED on for 13 us then off for 13 us, repeatedly.
 
  codes are embedded by selecting how many times to loop
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 0;  // will need to change for attiny


// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);   

 
 //Config the transponder for each car
 
 /*
 Car 1
  
 On time 1
 Off time 1
 On time 2
 Off time 2
 
 */ 
  noInterrupts();
}


// the loop routine runs over and over again forever:
void loop() {
  trans(38);  // one ms pluse
  delayMicroseconds(1000);    // delay between pluses
  trans(19);  // 0.5 ms pluse
  delayMicroseconds(6000);    // wait for 6ms
}


// Turn IR LED on and off for one clock cycle at 38kHz  
// hm is how many times too loop at 26us per loop
void trans (int hm) {
 //noInterrupts(); 
 for (int i =0; i < hm; i++){
    digitalWrite(led, HIGH);           // turn the LED on (HIGH is the voltage level)  may take 2us to excute
    delayMicroseconds(7);        // wait for one ms second
    digitalWrite(led, LOW);            // turn the LED off by making the voltage LOW
    delayMicroseconds(7);        // wait for one ms second
  }
  //interrupts();
}

