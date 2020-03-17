void setup() {
	// start serial port at 9600 bps and wait for port to open
	Serial.begin(9600);
	while(!Serial) {
		; // wait for serial port to connect
	}
	
	establishContact(); // send a byte to establish contact until receiver responds
}
	
void loop() {
	// if we get a valid byte, read analog ins:
	if(Serial.available()) > 0) {
		// get incoming byte:
		inByte = Serial.read();
		// do something
		
		// done
		Serial.write('Done')
	}
}

void establishContact() {
	while (Serial.available() <= 0) {
		Serial.print('A'); // send a capital A
		delay(300);
	}
}
