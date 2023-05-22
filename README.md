# Blink AVR Programming

> ## Description
> This is my first attempt to flash code into AVR microcontrollers.
> <br><br>
> You may have a ATMEGA328P microcontroller and a machine with Docker to flash.

<br>

> ## Instructions
> - Clone this repository to your machine.
> - Open the terminal in the cloned directory.
> - Execute: ```sudo docker build . -t debian:avrprog```
> - Connect the ATMEGA328P to a USB port.
> - Execute: ```sudo docker run --device=/dev/ttyUSB0 debian:avrprog```