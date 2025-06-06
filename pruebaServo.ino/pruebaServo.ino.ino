
int limiteInferior = 150; //50 es el minimo aceptado por el servo, aparentemente
int tiempo = 1000;
int paso = 80;
void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
}

void loop() {
    // for loop generate ramp from 0 to 255
  for(int digitalInput=limiteInferior; digitalInput<255 ; digitalInput= digitalInput+paso)
  {
    
    //Serial.print("Digital input: ");  // Text to be printed in Serial monitor
    Serial.println(digitalInput);     // Print Digital input in Serial monitor
    
    analogWrite(3, digitalInput);    // Write Analog output in pin 11
    delay(tiempo);
  }
  
    // for loop generate ramp from 0 to 255
  for(int digitalInput=255; digitalInput>limiteInferior ; digitalInput= digitalInput-paso)
  {
    
    //Serial.print("Digital input: ");  // Text to be printed in Serial monitor
    Serial.println(digitalInput);     // Print Digital input in Serial monitor
    
    analogWrite(3, digitalInput);    // Write Analog output in pin 11
    delay(tiempo);
  }
}
