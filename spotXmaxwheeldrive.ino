int IN1 = 5; 
int IN2 = 6; 
int IN3 = 9; 
int IN4 = 10; 
int vel = 255; // Velocidad de los motores (0-255)

int mspeed1;
int mspeed2;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

pinMode(IN3, OUTPUT);
pinMode(IN4, OUTPUT);
pinMode(IN1, OUTPUT);
pinMode(IN2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 forward(); 

 //offcar();

}
void forward(){
analogWrite(IN4, 0); 
analogWrite(IN2, 0); 
analogWrite(IN3, vel); 
analogWrite(IN1, vel); 

}

void offcar(){
analogWrite(IN4, 0); 
analogWrite(IN2, 0); 
analogWrite(IN3, 0); 
analogWrite(IN1, 0);
}
