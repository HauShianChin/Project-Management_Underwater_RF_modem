#include <SPI.h>  
#include "RF24.h" 
#include <SD.h>
File myFile;

RF24 myRadio (7, 8); 
struct package
{
  int id=0;
  
};

byte addresses[][6] = {"0"}; 



typedef struct package Package;
Package data;

void setup() 
{
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }


  Serial.print("Initializing SD card...");

  if (!SD.begin(4)) {
    Serial.println("initialization failed!");
    while (1);
  }
  Serial.println("initialization done.");
  myFile = SD.open("test.txt", FILE_WRITE);

 

  myRadio.begin(); 
  myRadio.setChannel(100); 
 myRadio.setPALevel(RF24_PA_MAX);
  myRadio.setDataRate( RF24_250KBPS ) ; 
  myRadio.openReadingPipe(1,addresses[0]);
  myRadio.startListening();
  Serial.print("Starting\n");
  
  
}


void loop()  
{ 


    while (myRadio.available())
    {
      digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(100);                       // wait for a second
      digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
      delay(100); 
      myRadio.read(&data, sizeof(data));
      int output = data.id;
      Serial.print(output);
      Serial.print("\n");
      writeToFile();
  
    }
}

void writeToFile(){
  myFile = SD.open("test.txt", FILE_WRITE);
  if (myFile) {
    
    Serial.print("Writing to test.txt...");
    myFile.println("Data received from Transmitter");
    myFile.println(data.id);
    myFile.println("Data transmission complete\n \n");
    
    // close the file:
    myFile.close();
    Serial.println("done.");
  } else {
    // if the file didn't open, print an error:
    Serial.println("error opening test.txt");
  }
  
}
