import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False)
GPIO.setup((17,23), GPIO.OUT)

while True:

  
  GPIO.output((17,23), GPIO.HIGH)
  time.sleep(1)

  GPIO.output(23 , GPIO.LOW)
  time.sleep(1)

  GPIO.output(17, GPIO.LOW)
  time.sleep(0.5)