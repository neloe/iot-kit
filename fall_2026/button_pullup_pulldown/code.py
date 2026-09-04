import board
import digitalio
import time

latch = False
lastseen = True
btn = digitalio.DigitalInOut(board.IO3)
btn.direction = digitalio.Direction.INPUT
# If no input, show me a zero voltage
#btn.pull = digitalio.Pull.DOWN
btn.pull = digitalio.Pull.UP
while True:
    print(latch, btn.value)
    if btn.value == False and lastseen:
        latch = not latch
    lastseen = btn.value
    #time.sleep(.01)