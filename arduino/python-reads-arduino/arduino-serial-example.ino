/*****************************************************************
  Example for Serial communication from Arduino and Python

  By Diego Ramirez (dr01191115@gmail.com) @DiddiLeija
  ****************************************************************
  This file contains a short and easy example of Serial communication,
  wich only takes an I/O from Serial port. The related Python scripts 
  will approach this program for experimental reading.

  As an example, use the HC-05 Bluetooth module. Python will try to catch 
  the "conversation" between the Bluetooth module and the COM3 serial.
******************************************************************/

#include <SoftwareSerial.h>

SoftwareSerial MyBTPort (10, 11); // go to pins 10 (RX) and 11 (TX)

void setup() {
  /****************************************************************
    At this point we are talking about the requirements for the Python examples:

    1. You must connect to port COM3 with 9600 bauds
    2. Use the Python "time.sleep(1)" to breathe until Serial and BT are
       ready.
    3. Use a Python "while True:" or "while 1:" for reading, because Python
       is not a loop, but Arduino is!
  *****************************************************************/

  // run once:
  Serial.begin(9600); // Python communicators are using the 9600 bauds setup
  MyBTPort.begin(38400);
  Serial.println("Arduino Serial Ready!");
  Serial.println("Are you ready too, Python?");
  delay(2000);  // give a short time (2 secs) to Python configuration
}

void loop() {
  /****************************************************************
    At this loop, Python must be catching something, or giving some
    output. Because Arduino programs run and run but Python programs
    not, this "void loop" must be parallel to the "while True" on the
    experimental Python file.
   ***************************************************************/
  // communicate:
  if (MyBTPort.available())  // BT has sth, send to Arduino
   Serial.write(MyBTPort.read());

   if (Serial.available())
   MyBTPort.write(Serial.read());  // Arduino Serial has sth, send to BT
}
