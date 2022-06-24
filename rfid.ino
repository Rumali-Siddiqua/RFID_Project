
#include <SoftwareSerial.h>

int r[14];
//int r[]={2,50,51,48,48,67,70,52,65,69,55,52,49,3};
int x[]={2,50,51,48,48,67,70,52,65,69,55,52,49,3};
int a =25051484867705265695552493;

SoftwareSerial Rfid = SoftwareSerial(5,6);

void setup() {
  // Serial Monitor to see results on the computer
  Serial.begin(9600);
  // Communication to the RFID reader
  Rfid.begin(9600);
}

void loop() {
  // check, if any data is available
  if(Rfid.available() > 0){
  for(int i=0;i<14;i++ ){
    // as long as there is data available...
    
      // read a byte
       r[i] = Rfid.read();
       
      // print it to the serial monitor
  }
  int k=0;
   for(int z=0;z<14;z++){
    int count=0;
    if(x[z]==r[z])
      {
     count=k+1;
    }
    Serial.print(count);
    //if(count==14)
   {Serial.print(count);
   }
   }
  }
}
  

   
    
    
 
