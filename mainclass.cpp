#include "Measurement.h"
#include <iostream>

int main(){
	Measurement m1 = Measurement(5, 3);
	Measurement m2 = Measurement(10, 4);
	
	Measurement m3 = m1 + m2;
	m3.print();

	Measurement m4 = m1 - m2;
	m4.print();

	Measurement m5 = m1 * m2;
	m5.print();

	Measurement m6 = m1 / m2;
	m6.print();

}
