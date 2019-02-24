 #define A 0
#define B 1
#define C 2
#define D 3
#define E 4
#define F 5
#define G 6
#define switch1 7
#define switch2 8
#define switch3 9
#define switch4 10
int value1 = 0; 
int value2 = 0; 
int value3 = 0; 
int value4 = 0; 
int sum = 0; 
void setup() {
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(switch1, INPUT);
  pinMode(switch2, INPUT);
  pinMode(switch3, INPUT);
  pinMode(switch4, INPUT);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
 detect();
 show();
}
void uno(){
  digitalWrite(F, LOW);
  digitalWrite(E, LOW);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(G, HIGH);
}
void dos(){
 digitalWrite(A, LOW);
 digitalWrite(B, LOW);
 digitalWrite(G, LOW);
 digitalWrite(E, LOW);
 digitalWrite(D, LOW);
 digitalWrite(F, HIGH);
 digitalWrite(C, HIGH);
 }
 void tres(){
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(G, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);}
void cuatro(){
digitalWrite(F, LOW);
digitalWrite(G, LOW);
digitalWrite(B, LOW);
digitalWrite(C, LOW);
digitalWrite(E, HIGH);
digitalWrite(D, HIGH);
digitalWrite(A, HIGH);}         
void cinco(){
digitalWrite(A, LOW);
digitalWrite(F, LOW);
digitalWrite(G, LOW);
digitalWrite(C, LOW);
digitalWrite(D, LOW);
digitalWrite(E, HIGH);
digitalWrite(B, HIGH);}
void seis(){
digitalWrite(A, LOW);
digitalWrite(F, LOW);
digitalWrite(G, LOW);
digitalWrite(C, LOW);
digitalWrite(E, LOW);
digitalWrite(D, LOW);
digitalWrite(B, HIGH);}
void siete(){
digitalWrite(A, LOW);
digitalWrite(B, LOW);
digitalWrite(G, LOW);
digitalWrite(C, LOW);
digitalWrite(D, HIGH);
digitalWrite(E, HIGH);
digitalWrite(F, HIGH);}
void ocho(){
digitalWrite(A, LOW);
digitalWrite(B, LOW);
digitalWrite(C, LOW);
digitalWrite(D, LOW);
digitalWrite(E, LOW);
digitalWrite(F, LOW);
digitalWrite(G, LOW);}
void nueve(){
digitalWrite(A, LOW);
digitalWrite(B, LOW);
digitalWrite(C, LOW);
digitalWrite(G, LOW);
digitalWrite(F, LOW);
digitalWrite(E, HIGH);
digitalWrite(D, HIGH);}
void cero(){
digitalWrite(A, LOW);
digitalWrite(B, LOW);
digitalWrite(C, LOW);
digitalWrite(D, LOW);
digitalWrite(E, LOW);
digitalWrite(F, LOW);
digitalWrite(G, HIGH);}
void a(){
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(D, HIGH);}
void b(){
   digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(D, LOW);}
void c(){
   digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
  digitalWrite(D, LOW);}
void d(){
   digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW);
  digitalWrite(D, LOW);}
void e(){
   digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(D, LOW);}
void f(){
   digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(D, HIGH);} 
void detect(){
if(digitalRead(switch1)==HIGH){value1 = 8;}
else if(digitalRead(switch2)==HIGH){value2 = 4;}
else if(digitalRead(switch3)==HIGH){value3 = 2;}
else if(digitalRead(switch4)==HIGH){value4 = 1;}
else if(digitalRead(switch1)==LOW){value1 = 0;}
else if(digitalRead(switch2)==LOW){value2 = 0;}
else if(digitalRead(switch3)==LOW){value3 = 0;}
else if(digitalRead(switch4)==LOW){value4 = 0;}
}
void show(){
 sum = value1 + value2 + value3 + value4;
 if(sum == 0){cero();}
  else if (sum == 1){uno();}
  else if(sum == 2){dos();}
  else if(sum == 3){tres();}
  else if(sum == 4){cuatro();}
  else if(sum == 5){cinco();}
  else if(sum == 6){seis();}
  else if(sum == 7){siete();}
  else if(sum == 8){ocho();}
  else if(sum == 9){nueve();}
  else if(sum == 10){a();}
  else if(sum == 11){b();}
  else if(sum == 12){c();}
  else if(sum == 13){d();}
  else if(sum == 14){e();}
  else if(sum == 15){f();}
  
}
