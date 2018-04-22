void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    digitalWrite(LED_BUILTIN, LOW); // "When the program is started, the LED should be off."
  
    Serial.begin(19200);
    Serial.flush();
}

void loop() {
    if (Serial.available() > 0) {

        // subtracting 48 because read() function return a decimal ascii value
        // so, when 0 or 1 is sent the function return 48 or 49
        int op = Serial.read() - 48; 
        int statePin = digitalRead(LED_BUILTIN); // return the pin state
        
        if (op == HIGH && statePin != HIGH) digitalWrite(LED_BUILTIN, HIGH);     
        else if (op == LOW && statePin != LOW) digitalWrite(LED_BUILTIN, LOW); 
    }
}
