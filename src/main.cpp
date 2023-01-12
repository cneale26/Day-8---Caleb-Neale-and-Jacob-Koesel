#include <mbed.h>
#include "HostIO.h"
#include "SegDisplay.h"


int main() {

  char data1, data2;
  SegInit();  // initialize the 7-seg display
  HostInit(); // initialize the communication with host computer

  while(1) {
    data2 = GetKeyInput();
    Seg2 = GetKeyInput();
    data1 = GetKeyInput();
    Seg1 = SegConvert(data1);
    printf("   "); //display spaces on host after received to digits
  }
}