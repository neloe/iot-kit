# Blinking External LEDs: Digital Output

## Schematic
![Circuit Schematic: Pin 2 to LED to 220 Resistor to GND](schematic.png)

## Hookup Diagram
![Breadboard diagram showing connections to flash the LED](hookup.png)

## Sample Code
```python
import board
import digitalio
import time

ledpin = digitalio.DigitalInOut(board.IO2)
ledpin.direction = digitalio.Direction.OUTPUT

ledpin.value=False
for i in range(10):
    ledpin.value = not ledpin.value
    time.sleep(2)
```
