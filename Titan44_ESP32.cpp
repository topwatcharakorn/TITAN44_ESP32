#include <Titan44_ESP32.h>



void Titan44::init() {
  pinMode(0, INPUT);                     
  pinMode(1, INPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(8, OUTPUT);                     
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  digitalWrite(8, HIGH);                  
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
}

void Titan44::intraval() {
  if (digitalRead(0) == LOW) {            
    digitalWrite(8, HIGH);                  
  } else {
    digitalWrite(8, LOW);                  
  }
  if (digitalRead(1) == LOW) {            
    digitalWrite(9, HIGH);                 
  } else {
    digitalWrite(9, LOW);                 
  }
  if (digitalRead(2) == LOW) {            
    digitalWrite(10, HIGH);                 
  } else {
    digitalWrite(10, LOW);                
  }
  if (digitalRead(3) == LOW) {            
    digitalWrite(11, HIGH);                 
  } else {
    digitalWrite(11, LOW);                
  }
}