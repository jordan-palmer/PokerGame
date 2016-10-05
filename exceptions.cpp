#include <iostream>

int main() {

		std::cout << "Program to calculate properties of a user-defined ellipse" << std::endl;

		double major = 0, minor = 0;

		std::cout << "Please Input Major Axis Size" << std::endl;

		try{

			std::cin >> major;

			std::cout << "Please Input Minor Axis Size" << std::endl;

			std::cin >> minor;

			std::cout << std::endl;

			if (major < 0){
				throw 1;
			}
		}

		catch (int exception){
			if (exception == 1){
				std::cout << "exception" << exception << "caught: negative value" << std::endl;
				abort();
			}
			
		}

	

		std::cout << "Eccentricity = " << sqrt(1 - (minor*minor) / (major*major)) << std::endl;
		std::cout << "Linear Eccentricity = " << sqrt((major*major) - (minor*minor)) << std::endl;

		std::cout << "Semi-Latus Rectum = " << (minor*minor) / major << std::endl;

		std::cout << "Focal Parameter = " << (minor*minor) / sqrt((major*major) - (minor*minor)) << std::endl;



}