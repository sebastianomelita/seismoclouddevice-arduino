
#include "common.h"

String macToString(const byte* mac) {
  char buf[13];
  memset(buf, 0, 13);
  snprintf(buf, 13, "%02x%02x%02x%02x%02x%02x", mac[0], mac[1], mac[2], mac[3], mac[4], mac[5]);
  return String(buf);
}

bool isZero(byte* buf, int bufsize) {
  bool ret = true;
  for(int i=0; i < bufsize && ret; i++) {
    if(buf[i] != 0) {
      ret = false;
    }
  }
  return ret;
}
