const int ledPin8 =  8;// the number of the LED pin
const int ledPin6 =  6;// the number of the LED pin

// Variables will change:
int ledState6 = LOW;                   // ledState used to set the LED
int ledState8 = HIGH;                   // ledState used to set the LED
unsigned long previousMillis = 0;        // will store last time LED was updated
const long interval = 1000;             // interval at which to blink (milliseconds)
void setup() {
  // set the digital pin as output:
  pinMode(ledPin8, OUTPUT);
  pinMode(ledPin6, OUTPUT);
}

void loop() {

  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState6 == LOW && ledState8 == HIGH) {
      ledState6 = HIGH;
      ledState8 = LOW;
    } else {
      ledState6 = LOW;
      ledState8 = HIGH;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin6, ledState6);
    digitalWrite(ledPin8, ledState8);
  }
}

