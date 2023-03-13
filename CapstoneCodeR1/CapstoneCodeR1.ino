int LED = 2;

void setup() 
{
  pinMode (LED, OUTPUT);
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // Define the pins for the sensors
  const int uv_sensor_pin = 32;
  const int temp_sensor_pin = 34;

}

void loop() 
{

  //LED Blink
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  Serial.println ("potato"); //testing serial print is working
  delay(1000);
/*
  int reading = analogRead(temp_sensor_pin);
  float voltage = reading * 3.3 / 4095.0;
  float temperature_level = (voltage - 0.5) * 100.0;
  return temperature_level;
*/
  
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (3.3 / 4095.0);
  float temperature_level = (voltage - 0.5) * 100.0;
  // print out the value you read:
  Serial.print("voltage: ");
  Serial.println(voltage);
  Serial.print("temp: ");
  Serial.println(temperature_level);
}
