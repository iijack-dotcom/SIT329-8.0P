#ifndef USART_DEAKIN_H
#define USART_DEAKIN_H

#include <Arduino.h>

class USART_DEAKIN {
public:
  void begin(uint32_t baud, uint8_t dataBits, uint8_t stopBits, char parity);
  void print(const char* text);
  void writeByte(uint8_t b);
  void forwardFromUsbOnce();
};

#endif
