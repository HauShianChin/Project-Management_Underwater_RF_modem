#include <SPI.h>  
#include "RF24.h"
#include <SD.h>

   File myFile;

int CS = 4;

RF24 myRadio (7, 8);
byte addresses[][6] = {"0"};

struct package
{
  int id=1;
};


typedef struct package Package;
Package data;


void setup()
{
  Serial.begin(9600);
SPI.begin();
  myRadio.begin();  
  myRadio.setChannel(100); 
  myRadio.setPALevel(RF24_PA_MAX);
  myRadio.setDataRate( RF24_250KBPS ) ; 
  myRadio.openWritingPipe( addresses[0]);

 //pinMode(CS, OUTPUT);
if(!SD.begin(CS)){
Serial.println("Problem");
return;
}else{
Serial.println("Everything ok");
}
}

void loop()
{
  myRadio.write(&data, sizeof(data)); 
  Serial.print(data.id);
  Serial.print("\n");
  data.id = data.id + random();

delay(10000);
 


  
  }
