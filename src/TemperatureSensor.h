/*
 * TemperatureSensor.h
 *
 *  Created on: 1 Jan 2014
 *      Author: Sam
 */

#ifndef TEMPERATURESENSOR_H_
#define TEMPERATURESENSOR_H_

#include "Adc.h"

static const float VOLTS_PER_CELSIUS = 0.01;

class TemperatureSensor {
public:
	TemperatureSensor(Adc *adc);
	virtual ~TemperatureSensor();

	float readTemperature();
	float readTemperature(bool isAveraged);
private:
	Adc *_adc;
};

#endif /* TEMPERATURESENSOR_H_ */
