int switchpin = 5;
int ledpin = 8;
int val = 0;
void setup() 
{ 
pinMode(ledpin,OUTPUT);//Defining the led port for the output port
Serial.begin(9600);//The baud rate is 9600
} 
void loop() 
{ 
        val = analogRead(switchpin);
	if(val>512)//The analog voltage value of 512 is exactly 2.5V
		digitalWrite(ledpin,HIGH);//If val Greater than 2.5 V
	else//If val less than or equal to 2.5 V
		digitalWrite(ledpin,LOW);
        Serial.println(val);
} 
