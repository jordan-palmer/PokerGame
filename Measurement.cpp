#include "Measurement.h"
#include <iostream>
#include <cmath>

Measurement::Measurement(double meas,double error) {
	_meas = meas;
	_error = error;
}
Measurement::Measurement() : _meas(0.0), _error(0.0){
}
Measurement::~Measurement() {
}
double Measurement::fractionalError() {
	return _error / _meas;
}
Measurement Measurement::operator+(const Measurement &rhs){
	Measurement temp;
	temp._meas = _meas + rhs._meas;
	temp._error = sqrt(pow(_error, 2) + pow(rhs._error, 2));
	return temp;
	
}
Measurement Measurement::operator-(const Measurement &rhs){
	Measurement temp;
	temp._meas = _meas - rhs._meas;
	temp._error = sqrt(pow(_error, 2) + pow(rhs._error, 2));
	return temp;
}
Measurement& Measurement::operator=(const Measurement &rhs){
	if (this != &rhs){
		_meas = rhs._meas;
		_error = rhs._error;
	}
	return *this;
}
Measurement Measurement::operator*(const Measurement &rhs){
	Measurement temp;
	temp._meas = _meas * rhs._meas;
	temp._error = sqrt(pow(_error, 2) + pow(rhs._error, 2));
	return temp;
}
Measurement Measurement::operator/(const Measurement &rhs){
	Measurement temp;
	temp._meas = _meas / rhs._meas;
	temp._error = sqrt(pow(_error, 2) + pow(rhs._error, 2));
	return temp;
}
void Measurement::print(){
	std::cout << _meas << "\t" << _error << std::endl;

}