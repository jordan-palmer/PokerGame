#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
#include <cmath>


int main() {

	std::ofstream myFile;
	myFile.open("numbers.txt");

	for (int i = 1; i < 101; i++){

		if (i % 7 == 0){
			myFile << i << " " << "divisible by 7 " << std::endl;
		}
		else{
			myFile << i << std::endl;
		}

	}
	//myFile.close();
	std::ofstream myFile;
	myFile.open("numbers2.txt");
	int x_cubed = 100000;
	int x = pow(x_cubed, 1 / 3);
	for (int i = 0; i < x; i++){
		myFile << i << "\t" << sqrt(i) << "\t" << pow(i, 2) << std::endl;


	}
myFile.close();
}
