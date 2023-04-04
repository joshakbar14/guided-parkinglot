#include "os/ultrasonicSensorClass.h"
#include <iostream>
#include <pigpio.h>
#include "parkingLot.h"

using namespace std;

int main() {
	gpioInitialise();    

    parkingLot parkinglot(2);

    parkinglot.start();

    sleep(20);

    parkinglot.stop();

    gpioTerminate();
}
