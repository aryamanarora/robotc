#pragma config(Sensor, S3,     light,          sensorLightActive)
#pragma config(Sensor, S1,     touch,          sensorTouch)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
// 48 threshold

int main() {
	int lines = 0;
	while (lines < 4) {
		nSyncedMotors = synchBC;
		nSyncedTurnRatio = 100;
		motor[motorB] = 40;
		if (SensorValue(light) <= threshold) {
			motor[motorB] = 0;
			lines++;

			motor[motorB] = 20;
			while (SensorValue(light) <= threshold) {}
		}
	}
}
