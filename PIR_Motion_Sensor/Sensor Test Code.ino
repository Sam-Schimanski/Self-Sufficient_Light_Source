#define PIRPIN 7

void setup() {
    pinMode(PIRPIN,INPUT); //set PIRPIN as input
    pinMode(LED_BUILTIN, OUTPUT); //Set built in LED as output
}

void loop() {
    bool pir; //Variable to hold input state
    pir = digitalRead(PIRPIN); //Read input
    digitalWrite(LED_BUILTIN ,pir); //Set built in led to match
    delay(500);
    digitalWrite(LED_BUILTIN, LOW); //Reset built in LED to low
    Serial.println(pir); //Print pir output to monitor
}
