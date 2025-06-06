
int limiteInferior = 50; //50 es el minimo aceptado por el servo, aparentemente
int tiempo = 400;
int digitalInput = 100;
String comando = "";

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
}

void loop() {
  if (Serial.available()){
    Serial.println("comando");
    comando = Serial.readString();
    Serial.println(comando);
  }

  delay(3000);
  Serial.println("estamos adentro");

  if (comando == "show"){
    digitalInput = 250;
    //Serial.println(digitalInput);     // Print Digital input in Serial monitor
    analogWrite(3, digitalInput);
    delay(tiempo);
  }

  if (comando == "hide"){
    digitalInput = 190;
    //Serial.println(digitalInput);
    analogWrite(3, digitalInput);
    delay(tiempo);
  }

}
