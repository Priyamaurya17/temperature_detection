const int sensor=A0; // Assigning analog pin A5 to variable 'sensor'
float tempc; //variable to store temperature in degree Celsius 
float tempf; //variable to store temperature in Fahreinheit 
float vout,vout1; //temporary variable to hold sensor reading 
void setup() { 
pinMode(sensor,INPUT); // Configuring sensor pin as input 
Serial.begin(9600); 
} 
void loop() { 
//vout=analogRead(sensor); //Reading the value from sensor
  vout1=analogRead(sensor);


vout=(vout1*500)/1023;  // To convet in C (1000/10)=100*5/1023
Serial.print(vout1);
tempc=vout; // Storing value in Degree Celsius 
tempf=(vout*1.8)+32; // Converting to Fahrenheit 
Serial.print("in DegreeC="); 
Serial.print("\t"); 
Serial.print(tempc);

Serial.print(" "); 
Serial.print("in Fahrenheit="); 
Serial.print("\t"); 
Serial.print(tempf); 
Serial.println(); 
Serial.println(vout1);
delay(1000); //Delay of 1 second for ease of viewing
}
