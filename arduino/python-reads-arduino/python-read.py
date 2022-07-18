"""
Attempt Two
  04/18/21

Try to read from the COM3 / COM4. To get results, use a simple
Arduino program with Serial.read() or Serial.println().

(Modified from related script "1.py").

This script adds a cleaner output interpreting, a better
error handler, etc.

This file needs the pySerial (as 'serial' on the program)
package from PyPI, installable with Pip:

    python -m pip install pyserial

Let's try it out!
"""

import serial
import time

try:
    time.sleep(1.5) # wait a little
    # connect to the COM4 port with 9600 bauds
    s = serial.Serial(port="COM4", # use the COM4 on your Arduino
                      baudrate=9600 # most Arduino serial connects to 9600 bauds
                      )
    try:
        s.close() # maybe the port is open?
    except:
        pass
    s.open() # open the port?
    res = b""
    while 1:
        # as the Arduino loop(), always look for data
        try:
            # print the Serial.read() without input echo
            # press Ctrl+C / Ctrl+Z to stop
            out = s.read()
            if out:
                if out != b"\r" or out != b"\n":
                    res += out
                if out == b"\n":
                    print(str(res).rstrip().lstrip("b").strip("'")[:len(str(res).rstrip().lstrip("b").strip("'")) - 4]) # retrieve a prettier output
                    res = b""
            else:
                time.sleep(0.1)
        except (KeyboardInterrupt, EOFError):
            # want no more? just break and close
            break
        except Exception as e:
            # maybe the port is interrupted, print an error message
            print(f"An error ocurred: {str(e)}\n")
            print("Try to check the port or the Arduino connection")
            break
    s.close() # close
except Exception as e:
    # maybe is unable to open the port, print an error message
    print(f"An error ocurred: {str(e)}\n")
    print("Try to check the port or the Arduino connection")
    break

# give a few seconds to analyze
print("\n"+"Done!")
time.sleep(4)
