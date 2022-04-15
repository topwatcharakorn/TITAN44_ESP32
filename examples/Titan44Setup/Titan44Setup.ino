#include <Titan44_ESP32.h>
Titan44 titan();
void setup() {
  
  titan.init(); 
 
}
void loop() {
  
  titan.intraval(); 
}
