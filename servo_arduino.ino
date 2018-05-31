#include <Servo.h>

Servo servo_pin_7;
void setup(){
  Serial.begin(9600);   //start the serial communication
 servo_pin_7.attach(7);     
}

void loop(){

  if(Serial.available() > 0){           //if some data is available of in the serial port
    char state = Serial.read();   //read the value
    if(state == '0'){             //if statement will be true(1)
       servo_pin_7.write( 0 );
    }
    if(state == '1'){             //if statement will be false(0)
       servo_pin_7.write( 45 );
    }
     if(state == '2'){             //if statement will be true(1)
       servo_pin_7.write( 90 );
    }
     if(state == '3'){             //if statement will be true(1)
       servo_pin_7.write( 180 );
    }
  }
}
