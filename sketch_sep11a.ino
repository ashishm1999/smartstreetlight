<p>#define LAMP  8  // choose the pin for the RELAY</p><p>#define PIR 13   // choose the input pin (for PIR sensor)                                                void setup()                                                                    Serial.begin(9600);
  pinMode(LAMP, OUTPUT); // declare lamp as output
  pinMode(PIR,INPUT); // declare sensor as input                                                                                                                         void loop() {
  
  
  int valeur_ldr = analogRead(A4); // read LDR value
  int valeur_pir = digitalRead(PIR); // read input value
  Serial.println(valeur_ldr);
  Serial.println(valeur_pir);
  
 if((300>valeur_ldr) && ( valeur_pir==HIGH) ){
       digitalWrite(LAMP,1);  // Turn ON the light
       delay(6000);
       
}
else {
  
       digitalWrite(LAMP,0); // Turn OFF the light
       
}
 }
CODE
