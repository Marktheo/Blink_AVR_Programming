# Blink AVR Programming

> ## Description
> This is my first attempt to flash code into AVR microcontrollers.

<br>

> ## Instructions
> - Get the files by cloning this repository.
> - Open the terminal in the cloned directory.
> - Execute: ```sudo docker build . -t debian:avrprog```
> - Connect the ATMEGA328P to a USB port.
> - Execute: ```sudo docker run --device=/dev/ttyUSB0 debian:avrprog```
> 
> Please make sure you have Docker installed. 