int pushButton = 6;//pin du bouton
int led=12;
void setup() {
  // put your setup code here, to run once
  Serial.begin(9600);//initialisation du port serie
  pinMode(pushButton, INPUT); 
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(digitalRead(pushButton));//affichage de la valeur du bouton
  if(digitalRead(pushButton)==HIGH){
    digitalWrite(led,HIGH);
  }
  if(digitalRead(pushButton)==LOW){
    digitalWrite(led,LOW);
  }
}
