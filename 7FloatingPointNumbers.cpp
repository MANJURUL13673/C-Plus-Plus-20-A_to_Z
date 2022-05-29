#include <iostream>
#include <iomanip>

int main()
{
	//Declare and initialize the variables
	float number1{ 1.12345678901234567890f };
	double number2{ 1.12345678901234567890 };
	long double number3{ 1.12345678901234567890L };

	//Print out the sizes
	std::cout << "sizeof float: " << sizeof(float) << std::endl;
	std::cout << "sizeof double: " << sizeof(double) << std::endl;
	std::cout << "sizeof long double: " << sizeof(long double) << std::endl;

	//Precision
	std::cout << std::setprecision(20);	// Control the precision from std::cout.
	std::cout << number1 << std::endl;	//Precision : 7
	std::cout << number2 << std::endl;	//Precision : around 15
	std::cout << number3 << std::endl;	//Precision : upto 20

	//Float problems : The precision is usually too limited
	//for a lot of (float)(192400016.0F)
	float number4{ 192400023.0f };	//Error : narrowing conversion
	std::cout << number4 << std::endl;

	double number5{ 192400023.0f };	//not correct. as value has f. so Error: narrowing conversion
	std::cout << number5 << std::endl;

	double number6{ 192400023.0 };	//correct
	std::cout << number6 << std::endl;
	std::cout << "---------------------------------" << std::endl;
	//Scientific notation
	//What we have seen so far in terms of floating point types
	//is fixed notation. There is another notation, scientific
	//that is handy if you have really huge numebrs or small numbers
	//to represent

	double number7{ 192400023 };
	double number8{ 1.92400023e8 };
	double number9{ 1.924e8 };	//can omit the lower 00023
								//for simplicity if our applications allow
	double number10{ 0.00000000003498 };
	double number11{ 3.498e-11 };

	std::cout << number7 << std::endl;
	std::cout << number8 << std::endl;
	std::cout << number9 << std::endl;
	std::cout << number10 << std::endl;
	std::cout << number11 << std::endl;
	std::cout << "-------------------------------" << std::endl;
	//Infinity and NaN
	double number12{ 5.6 };
	double number13{};	//Initialized by zero
	double number14{};	//Initialized by zero

	//Infinity
	double result{ number12 / number13 };
	std::cout << result << std::endl;

	//NaN
	result = number13 / number14;
	std::cout << result << std::endl;
	return 0;
}