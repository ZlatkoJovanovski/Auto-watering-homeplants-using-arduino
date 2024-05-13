This is an embedded systems project whose purpose is to act as an automatic watering system that measures a plants moisture and waters it if the plants moisture threshold is not reached. Firstly what is needed are a microcontroller board like Arduino Uno, breadboard, 3x water pumps, 3x tubes/pipes, 3x 5v relay modules and 3x soil moisture sensors. A more detailed explanation of how it works: A moisture sensor reads the soil moisture of a plant and sends that information to the microprocessor, which compares it to the previously set up threshold, then if the threshold is met or exceeded nothing happens moisture readings continue, but if it is not met the corresponding  water pump activates and waters the plant which needed water.


CONNECTIONS:
ARDUINO UNO
	5V into breadboard +
	GND into bb -
	VIN into bb +
	A0 into sensor module DO
	A1 into sensor module DO
	A2 into sensor module DO
	2 into 5v relay IN
	3 into 5v relay IN
	4 into 5v relay IN
SOIL MOISTURE SENSOR MODULE
	GND into bb -
	VCC into bb +
	to connect with sensor just turn away from each other and connect straight
5V RELAY MODULE
	GND into bb -
	VCC into bb +
PUMP
	small red wire twist with big red wire from battery supply
	big black wire into NO
BATTERY POWER SUPPLY
	big black wire into COM
 
![viber_image_2024-04-12_21-14-43-807](https://github.com/ZlatkoJovanovski/Auto-watering-homeplants-using-arduino/assets/102656383/c3c9496e-9af4-4141-89c4-e28323fbab99)
