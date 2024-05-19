int flag = 1;

//Motor A
int enA = 3;
int in1 = 2;
int in2 = 4;

//Motor B
int enB = 5;
int in3 = 6;
int in4 = 7;

int enC = 9;
int in5 = 8;
int in6 = 10;

int enD = 11;
int in7 = 12;
int in8 = 13;

void setup() {
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  
  pinMode(enC, OUTPUT);
  pinMode(in5, OUTPUT);
  pinMode(in6, OUTPUT);
  
  pinMode(enD, OUTPUT);
  pinMode(in7, OUTPUT);
  pinMode(in8, OUTPUT);
  
  pinMode(1,OUTPUT);


}

void loop() {
  
  if(flag == 1){
    digitalWrite(1,HIGH);
    delay(1000);
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    analogWrite(enA, 100);

    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    analogWrite(enB, 100);

    digitalWrite(in5, LOW);
    digitalWrite(in6, HIGH);
    analogWrite(enC, 100);

    digitalWrite(in7, LOW);
    digitalWrite(in8, HIGH);
    analogWrite(enD, 100);
  }

  delay(5000);
  flag = 0;
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  digitalWrite(in5, LOW);
  digitalWrite(in6, LOW);
  digitalWrite(in7, LOW);
  digitalWrite(in8, LOW);
  digitalWrite(1,LOW);

  
  //flag = 0;
  

}