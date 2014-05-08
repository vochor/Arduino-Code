
int pinDoor = 12;
int pinSignal = 2;
int readDoor = LOW;
void setup_Intercom()
{
  pinMode(pinDoor,OUTPUT);
  digitalWrite(pinDoor,LOW);
  Serial.begin(9600);
  //attachInterrupt(0,intercom,FALLING);
}

void openDoor_Intercom(){
  digitalWrite(pinDoor,HIGH);
  delay(3000);
  digitalWrite(pinDoor,LOW);  
}

void loop_Intercom(){
    readDoor = digitalRead(pinSignal);
    if(readDoor == HIGH){
      Serial.println("SEND-INTERCOM-DETECT");
      readDoor = LOW;
      delay(1000);
    }
}