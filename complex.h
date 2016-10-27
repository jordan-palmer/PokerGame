
class complex
{

public:
	complex(double real, double imaginary);
	~complex(); //Destructor is needed!!



    //double getmodulus();
	void printreal();
    void printimaginary();

private:
	double _real;
	double _imaginary;

};
