#include "USART_DEAKIN.h"

// Minimal stub so it compiles. Replace with SERCOM code after it builds.
void USART_DEAKIN::begin(uint32_t, uint8_t, uint8_t, char) {}
void USART_DEAKIN::print(const char* text) {
  // For now, just mirror to USB Serial so we see something build-time.
  if (text) Serial.print(text);
}
void USART_DEAKIN::writeByte(uint8_t b) { Serial.write(b); }
void USART_DEAKIN::forwardFromUsbOnce() {
  if (Serial.available()) Serial.write((uint8_t)Serial.read());
}
