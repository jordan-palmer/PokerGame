#include <iostream>
#include <cmath>

int main() {

	int fibonacci[45] = { 0, 1 };

	for (int i = 2; i < 45; i++){
		fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];


	}

	for (int j = 0; j < 45; j += 2){
		std::cout << "term " << (j+1) << " " << fibonacci[j] << std::endl;

	}

 
}