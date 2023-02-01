
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() {
   
  // reads the input on analog pin A0 (value between 0 and 1023)
  int analogValue0 = analogRead(A0);

  int analogValue1 = analogRead(A1);

  int analogValue2 = analogRead(A2);

  int analogValue3 = analogRead(A3);
  
  int analogValue4 = analogRead(A4);

  int analogValue5 = analogRead(A5);

   if (analogValue0 < 1000){
    Serial.println("1");
  }


    
  else if (analogValue1 < 1000){
    Serial.println("2");
  }
  

  else if (analogValue2 < 1000){
    Serial.println("3");
  }


    
  else if (analogValue3 < 1000){
    Serial.println("4");
  }
  
  else if (analogValue4 < 1000){
    Serial.println("5");
  }


    
  else if (analogValue5 < 1000){
    Serial.println("6");
  }

  else {
     Serial.println("9");
     }
}
