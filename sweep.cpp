#include <Servo.h>

Servo s1;

void setup(){
  
  s1.attach(9);
}

void loop(){
 int pos = 0; 
 int max_degree = 180; 
 for(pos = 0; pos < max_degree;pos++){
  	s1.write(pos);  
    delay(50);
  }
 for(pos = max_degree; pos > 0;pos--){
  	s1.write(pos);  
    delay(50);
  } 
}
