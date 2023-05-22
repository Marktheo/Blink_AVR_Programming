FROM debian:bullseye-slim

WORKDIR /Blink

COPY . /Blink

RUN apt-get update

RUN apt-get -y install gcc g++ gcc-avr avr-libc avrdude binutils-avr sudo make

CMD ["sudo", "chown", "root:root" "/dev/ttyUSB0"]

CMD ["make"]