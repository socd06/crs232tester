#include stdio.h
#include stdlib.h
#include sys/io.h
#define port 0x378
int main (void) {
  unsigned int p = 0x01; //change this variable to test all 8 outputs
  if(ioperm(port,1,1)){
    perror("\nError, cannot open port. ");
    exit(1);
    }
  outb(p,port);
  if(ioperm(port,1,0)){
    perror("\nError, cannot open port.");
    exit(1);
    }
  exit(0);
  }
