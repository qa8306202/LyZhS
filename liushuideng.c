#include <stdio.h>
#include <wiringPi.h>

int main()
{
	wiringPiSetup();
	pinMode(8,OUTPUT);
	digitalWrite(8,LOW);//D0
	pinMode(9,OUTPUT);
	digitalWrite(9,LOW);//D1
	pinMode(7,OUTPUT);
	digitalWrite(7,LOW);//D2
	pinMode(0,OUTPUT);
	digitalWrite(0,LOW);//D3
	pinMode(2,OUTPUT);
	digitalWrite(2,LOW);//D4
	pinMode(3,OUTPUT);
	digitalWrite(3,LOW);//D5
	pinMode(12,OUTPUT);
	digitalWrite(12,LOW);//D6
    pinMode(23,OUTPUT);//R
    digitalWrite(23,LOW);
	    pinMode(24,OUTPUT);//G
    digitalWrite(24,LOW);
    pinMode(25,OUTPUT);//B
    digitalWrite(25,LOW);

	digitalWrite(8,LOW);
	digitalWrite(9,LOW);
	digitalWrite(7,LOW);
	digitalWrite(0,LOW);
	digitalWrite(2,LOW);
	digitalWrite(3,LOW);
	digitalWrite(12,LOW);
	softPwmCreate(9,0, 100);
	softPwmCreate(7,0, 100);
	softPwmCreate(0,0, 100);
	while(1)
	{
	
		
		
		softPwmWrite(9, 100);
		softPwmWrite(7, 100);
		softPwmWrite(0, 100);
		
		delay(1000);
		softPwmWrite(9, 0);
		softPwmWrite(7, 0);
		softPwmWrite(0, 0);
		delay(1000);	
		digitalWrite(2,HIGH);
		digitalWrite(8,LOW);
	digitalWrite(9,LOW);
	digitalWrite(7,LOW);
	digitalWrite(0,LOW);
	
	digitalWrite(3,LOW);
	digitalWrite(12,LOW);
		digitalWrite(25,HIGH);
		digitalWrite(24,LOW);
		digitalWrite(23,LOW);

		delay(1000);
		
		digitalWrite(8,LOW);
	digitalWrite(9,LOW);
	digitalWrite(7,LOW);
	digitalWrite(0,LOW);
	digitalWrite(3,HIGH);
	digitalWrite(2,LOW);
	digitalWrite(12,LOW);
		digitalWrite(25,LOW);
		digitalWrite(24,LOW);
		digitalWrite(23,HIGH);

		delay(1000);
		digitalWrite(8,LOW);
	digitalWrite(9,LOW);
	digitalWrite(7,LOW);
	digitalWrite(0,LOW);
	digitalWrite(2,LOW);
	digitalWrite(12,HIGH);
	digitalWrite(3,LOW);
		digitalWrite(25,LOW);
		digitalWrite(24,HIGH);
		digitalWrite(23,LOW);

		delay(1000);


		
		
	}	
	
	
	return 0;
}
