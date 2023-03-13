int LED = 2;

void setup() 
{
  pinMode (LED, OUTPUT);
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() 
{

  //LED Blink
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  Serial.println ("potato"); //testing serial print is working
  delay(1000);
}
