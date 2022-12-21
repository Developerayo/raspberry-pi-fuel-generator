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
}
    receiver.resetAvailable();
  }
}
