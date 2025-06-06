
int limiteInferior = 50; //50 es el minimo aceptado por el servo, aparentemente
int tiempo = 400;
int digitalInput = 100;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
}

void loop() {
  digitalInput = 250;

    //Serial.println(digitalInput);     // Print Digital input in Serial monitor
    analogWrite(3, digitalInput);
    delay(tiempo);

    digitalInput = 190;
    //Serial.println(digitalInput);
    analogWrite(3, digitalInput);
    delay(tiempo*10);

}
