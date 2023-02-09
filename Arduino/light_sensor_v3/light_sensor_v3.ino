void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

 int SensorValue1 = analogRead(A0);
    int SensorValue2 = analogRead(A1);
      int SensorValue3 = analogRead(A2);
        int SensorValue4 = analogRead(A3);
          int SensorValue5 = analogRead(A4);
            int SensorValue6 = analogRead(A5);

 int value0 = "";
   int value1 = "";
      int value2 = "";
        int value3 = "";
          int value4 = "";
            int value5 = "";
              int value6 = "";


void loop() {

  if (SensorValue1 <= 800){
        value1 = "1";  
      }

    if (SensorValue2 <= 800){
          value2 = "2";  
      }

        if (SensorValue3 <= 800){
             value2 = "2"; 
        }

            if (SensorValue4 <= 800){
                 value4 = "4"; 
            }
  
                  if (SensorValue5 <= 800){
                       value5 = "5"; 
                  }

                      if (SensorValue6 <= 800){
                            value6 = "6"; 
                      }


// If the laser is still colliding
 else if (SensorValue1 > 800){
    value1 = value0;     
 }

    else if (SensorValue2 > 800){
        value2 = value0; 
    }

        else if (SensorValue3 > 800){
            value3 = value0; 
        }

            else if (SensorValue4 > 800){
                value4 = value0; 
            }

                else if (SensorValue5 > 800){
                    value5 = value0; 
                }

                    else if (SensorValue6 > 800){
                        value6 = value0; 
                    }

print();
}

void print(){
// If the laser is blocked by the user.
 Serial.print(value1);
    Serial.print(" ");
 Serial.print(value2);
    Serial.print(" ");
 Serial.print(value3);
    Serial.print(" ");
 Serial.print(value4);
    Serial.print(" ");
 Serial.print(value5);
    Serial.print(" ");
 Serial.println(value6);

 delay(10);

}
