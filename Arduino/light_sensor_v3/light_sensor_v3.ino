void setup() {

 Serial.begin(9600);
} 

int value1 = 0;
int value2 = 1;
int value3 = 0;
int value4 = 1;
int value5 = 0;
int value6 = 1;

void loop() {

 if (analogRead(A0) < 800){
      value1 = 1;
  }

else{
   value1 = 0 ;
}

print();
}

void print(){
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

} 