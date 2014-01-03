/*
 * TemperatureSensor.cpp
 *
 *  Created on: 1 Jan 2014
 *      Author: Sam
 */

#include <TemperatureSensor.h>

TemperatureSensor::TemperatureSensor(Adc *adc) {
	// TODO Auto-generated constructor stub
	_adc = adc;
}

TemperatureSensor::~TemperatureSensor() {
	// TODO Auto-generated destructor stub
}

float TemperatureSensor::readTemperature() {
	return readTemperature(false);
}

float TemperatureSensor::readTemperature(bool isAveraged) {
	// convert volts to celsius and return
	return _adc->readVolts();
}
