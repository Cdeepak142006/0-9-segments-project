const int sensor_pin = A0;
int relay = 2;
int limit = 40;
void setup() {
  Serial.begin(9600);
  pinMode(relay,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  float moisture_percentage;
  // put your main code here, to run repeatedly:
moisture_percentage = (100.00 - ((analogRead(sensor_pin)/1023.00) * 100.00));
Serial.print(" Soil Moisture(in Percentage)=");
Serial.print(moisture_percentage);
Serial.println("%");
if(moisture_percentage <= limit){
  digitalWrite(relay,HIGH);
}else{
  digitalWrite(relay,LOW);
  }

delay(1000);
}
