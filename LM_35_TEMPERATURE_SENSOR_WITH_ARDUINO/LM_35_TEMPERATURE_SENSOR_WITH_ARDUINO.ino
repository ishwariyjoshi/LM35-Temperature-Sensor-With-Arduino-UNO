// LM 35 TEMPERATURE SENSOR WITH ARDUINO
//visit for 0.48828125 = [(5V*1000)/1024]10  https://playground.arduino.cc/Main/LM35HigherResolution 

float temperature ;    //Define the temperature float var
int sensor = 1;     // sensor middle pin on analog pin 0
#define analogpin 13
#define digitalpin 07
void setup()
{
  Serial.begin(9600);
  Serial.begin(9800);//start the serial monitor 
}
void loop()
{
  
  temperature = analogRead(sensor);        //assigning the analog output to temperature
  
  temperature = temperature * 0.58828125;   //converting volts to degrees celsius ----- 0.48828125 = [(5V*1000)/1024]10
   
  Serial.println(temperature);     // print read value 
  Serial.print("°C temperature");   //print on the serial monitor "__value °C temperature"
  delay(4000);  //wait 1 second
}
