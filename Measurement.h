
class Measurement{

public:
	Measurement(double meas, double error);
	~Measurement(); //Destructor is needed!!
	double fractionalError();
	Measurement Measurement::operator+(const Measurement &rhs);
	Measurement Measurement::operator-(const Measurement &rhs);
	Measurement& Measurement::operator=(const Measurement &rhs);
	Measurement Measurement::operator*(const Measurement &rhs);
	Measurement Measurement::operator/(const Measurement &rhs);
	Measurement::Measurement(); //so temp doesn't need to be initialised (temp(0,0))
	void print();

private:
	double _meas;
	double _error;

};

//Basically in the header file, all of the functions the user can use have to be declared. Even the print function.
//Private: The user cant change _meas or _error.