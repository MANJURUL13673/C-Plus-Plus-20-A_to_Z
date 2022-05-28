#include <iostream>

int main()
{
	int number1 = 15;	//Decimal
	int number2 = 017;	//Octal
	int number3 = 0x0f; //Hexadecimal
	int number4 = 0b00001111;	//Binary;
	
	std::cout << "Number1 : " << number1 << " Number2 : " << number2 << " Number3 : " << number3 << " Number4 : " << number4 << std::endl;
	return 0;
}