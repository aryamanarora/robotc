#pragma config(Sensor, S1,     touch,          sensorTouch)
#pragma config(Sensor, S4,     light,          sensorLightActive)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main() {
	while(true) {
		nxtDisplayCenteredTextLine(2, SensorValue[S4]);
		wait1Msec(100);
		nxtDisplayClearTextLine(2);
	}
}
