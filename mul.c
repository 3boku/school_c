#pragma config(Sensor, S1,     Touch,          sensorEV3_Touch)
#pragma config(Motor,  motorA,          Large,         tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
while(1){
		if(SensorValue[S1]==1)
		{
			moveMotorTarget(Large, 180, 70);
			sleep(1000);
			moveMotorTarget(Large, 180, -70);
			sleep(1000);
		}
	}
}
