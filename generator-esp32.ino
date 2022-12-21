#include <RCSwitch.h>

RCSwitch receiver = RCSwitch();
const int RECEIVER_GPIO_PIN = 14;

const int RELAY_GPIO_PIN = 12;

void turnOnGenerator() {
  digitalWrite(RELAY_GPIO_PIN, HIGH);
}

void turnOffGenerator() {
  digitalWrite(RELAY_GPIO_PIN, LOW);
}

void setup() {

  Serial.begin(115200);

  receiver.enableReceive(RECEIVER_GPIO_PIN);

  pinMode(RELAY_GPIO_PIN, OUTPUT);

  turnOffGenerator();
}

void loop() {

  if (receiver.available()) {

    long code = receiver.getReceivedValue();

    Serial.print("Received code: ");
    Serial.println(code);

    if (code == 123456) {

      if (digitalRead(RELAY_GPIO_PIN) == LOW) {
        turnOnGenerator();
      } else {
        turnOffGenerator();
      }
    }

    receiver.resetAvailable();
  }
}
