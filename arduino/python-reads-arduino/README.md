# Communication between Arduino and Python via the serial port

This example connects Python to a serial port, where
Arduino will send stuff. Python will read it, and print
it on the screen.

So, Arduino writes, Python reads.

## How to run this example

First, you need both [Arduino](https://arduino.cc) and
[Python](https://python.org). Also, this example uses the
[PySerial Python package](https://github.com/pyserial/pyserial),
so you'll have to install it (or install the `requirements.txt`
file included here).

Then, you have to open the Arduino file, run it, and then run the
Python file. Get sure Arduino is connecting to the COM4 port, BTW.
