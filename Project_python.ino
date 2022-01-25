const int led1 = 3;
const int led2 = 4;
const int led3 = 5;
int a, b, c;

void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  char inChar = (char)Serial.read();
 
  if ( inChar == '1'){
    a++ ;
    if (a > 1) { a = 0; }
    if (a == 1) {
      digitalWrite(led1,HIGH);
    } 
    else {
      digitalWrite(led1,LOW);
    }
  }
 
  if ( inChar == '2'){
    b++ ;
    if (b > 1) { b = 0; }
    if (b == 1) {
      digitalWrite(led2,HIGH);
    } 
    else {
      digitalWrite(led2,LOW);
    }
  }
  
  if ( inChar == '3'){
    c++ ;
    if (c > 1) { c = 0; }
    if (c == 1) {
      digitalWrite(led3,HIGH);
    } 
    else {
      digitalWrite(led3,LOW);
    }
  }
}
