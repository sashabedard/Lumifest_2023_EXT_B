
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() {
   
  // reads the input on analog pin A0 (value between 0 and 1023)
  int analogValue0 = analogRead(A0);

  int analogValue1 = analogRead(A1);



   if (analogValue0 < 800){
    Serial.println("1");
  }


    
  else if (analogValue1 < 800){
    Serial.println("2");
  }
  



  else {
     Serial.println("9");
     }
}
