#include "complex.h"
#include <iostream>

complex(double real, double imaginary){
    _real = real;
    _imaginary = imaginary;
}

complex::~complex() {
}

void complex::printreal(){
    
    std::cout << real << std::endl;
}
complex::complex() : _real(0,0),_imaginary(0,0){
}

void complex::printimaginary(){
    
    std::cout << imaginary << std::endl;
}
