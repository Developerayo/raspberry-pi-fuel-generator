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
    receiver.resetAvailable();
  }
}
