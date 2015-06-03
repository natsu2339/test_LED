 void setup() { 
   // put your setup code here, to run once:
   
   pinMode(13, OUTPUT); 
   delay(15000);
 } 
 

 void loop() { 
   // put your main code here, to run repeatedly:
   int var=0; 
   while(var<13){
     digitalWrite(13, HIGH); 
     delay(1000); 
     digitalWrite(13, LOW); 
     delay(1000); 
     var++;
   }
   delay(15000);
 } 

