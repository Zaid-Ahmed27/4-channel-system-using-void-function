int led1=13;
int led2=12;
int led3=11;

int led4=10;
int led5=9;
int led6=8;

int led7=7;
int led8=6;
int led9=5;

int led10=4;
int led11=3;
int led12=2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);

  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);

  pinMode(led7,OUTPUT);
  pinMode(led8,OUTPUT);
  pinMode(led9,OUTPUT);

  pinMode(led10,OUTPUT);
  pinMode(led11,OUTPUT);
  pinMode(led12,OUTPUT);
}

void loop() {

 lane1off();
 delay(1000);
 lane1ready();
 delay(1000);
 lane1on();
 delay(1000);

 
 lane2ready();
 delay(1000);
 lane2on();
 delay(1000);

  lane3ready();
 delay(1000);
 lane3on();
 delay(1000);

  lane4ready();
 delay(1000);
 lane4on();
 delay(1000);

}
void lane1off(){
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
 }
void lane1ready(){
  digitalWrite(4,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
}

void lane1on(){
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
}
void lane2ready(){
  digitalWrite(13,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(8,LOW);
}
void lane2on(){
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  digitalWrite(8,HIGH);
    
}

void lane3ready(){
  
  digitalWrite(8,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
}
void lane3on(){
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
  digitalWrite(5,HIGH);
  
}

void lane4ready(){
  digitalWrite(7,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(2,LOW);
}
void lane4on(){
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  digitalWrite(2,HIGH);  
}


 







  
