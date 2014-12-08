#include <wiringPi.h>

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#define MAXTIMINGS 85
#define DHTPIN     7
int dht_dat[5] = {0, 0, 0, 0, 0};

void read_dht11_dat(){
 uint8_t laststate = HIGH;
 uint8_t counter   = 0;
 uint8_t j         = 0,i;
 float   f;
}

int main(void){
 printf("Read from DHT11 sensor.\n");
 
 if(wiringPiSetup() == -1)
  exit(1);

  return(0);
}
