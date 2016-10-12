#include <iostream>
#include <cmath>

float A(float base, float height);
float A(float a, float b, float c);
float power(float F, int I);

int main(){

	float Area = A(5, 6);
	std::cout << " The area of the triangle is: " << Area << std::endl;
	
	Area = A(5, 6, 7);
	std::cout << " The area of the triangle is: " << Area << std::endl;

	float fpower = power(2, 3);
	std::cout << "  " << fpower << std::endl;



}

float A(float a, float b, float c){
	float p = (a + b + c) / 2;
	float area = sqrt(p*(p - a)*(p - b)*(p - c));
	return area;

}

float A(float base, float height){
	float area = 0.5 * base * height;
	return area;
}

float power(float F, int I){ //recursive Funtion
	if (I > 1){ 
		F = F*power(F, I - 1);
		return F;
	}
	else if (I = 1){
		return F;
	}
	else{
		return 0;
	}

}