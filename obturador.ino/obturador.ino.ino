
int limiteInferior = 50; //50 es el minimo aceptado por el servo, aparentemente
int tiempo = 4;
void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
}

void loop() {

    analogWrite(3, 255);
    //delay(tiempo);
    //analogWrite(3, 100);
    //delay(tiempo);

}
