import board
import digitalio
import time

ledpin = digitalio.DigitalInOut(board.IO2)
ledpin.direction = digitalio.Direction.OUTPUT

ledpin.value=False
for i in range(10):
    ledpin.value = not ledpin.value
    time.sleep(2)