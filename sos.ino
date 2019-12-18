  // Here we declare a few variables that we'll use later in the code
// We define variables so it's easy to change and uniform throughout the code
int LED = 9;
int shortTime = 300;
int longTime = 900;

void setup () {
  // This sets the pin 9 in output mode
  pinMode(LED, OUTPUT);
  
}

void loop () {
  // This is the letter S
  switchLED(shortTime);
  switchLED(shortTime);
  switchLED(shortTime);

  // This delay is to separate the letters
  delay(longTime);

  // This is the letter O
  switchLED(longTime);
  switchLED(longTime);
  switchLED(longTime);

  delay(longTime);

  // This is the letter S
  switchLED(shortTime);
  switchLED(shortTime);
  switchLED(shortTime);

  delay(longTime);
  delay(longTime);
  delay(longTime);
}

void switchLED (int timing) {
  // This sends high voltage to the specified pin
  digitalWrite(LED, HIGH);
  // This delays the next line of code by "timing"
  // This is so the user can change how long the LED is "on" for
  delay(timing);
  // This sends low voltage to the specified pin
  digitalWrite(LED, LOW);
  // This delays the next line of code by "timing"
  // I made this one short because we don't want long timing for when
  // the LED is "off"
  delay(shortTime);
}
