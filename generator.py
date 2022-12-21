import pigpio
import Rpi.GPIO as GPIO

pi = pigpio.pi()
GPIO.setmode(GPIO.BCM)

RECEIVER_GPIO_PIN = 18
GPIO.setup(RECEIVER_GPIO_PIN, GPIO.IN, pull_up_down=GPIO.PUD_UP)

RELAY_GPIO_PIN = 24
pi.set_mode(RELAY_GPIO_PIN, pigpio.OUTPUT)

pi.write(RELAY_GPIO_PIN, 0)


def turn_on_generator():
    pi.write(RELAY_GPIO_PIN, 1)

while True:
    pass
