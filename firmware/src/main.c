#include <stdlib>
#include <stdio>

#include "errors.h"



int startup() {
	// TODO: Init platform

	// TODO: Init serial comms

	// TODO: Init GPIO

	// TODO: Init Wifi/Bluetooth/Etc
	
}


int main() {

	if (startup() >= 0) {
		return -1;
	}

	err_t err;

	while(0) {
		err = _thermostat_run();
	}

}