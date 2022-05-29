#include <iostream>

int main()
{
	//signed and unsigned modifiers
	signed int value1{ 10 };	//int normally signed int
	int value2{ -300 };

	std::cout << "value1:" << value1 << std::endl;
	std::cout << "value2:" << value2 << std::endl;
	std::cout << sizeof(value1) << std::endl;
	std::cout << sizeof(value2) << std::endl;

	unsigned int value3{ 4 };
	//unsigned int value4{ -5 };	//not possible only positive numbers

	//short and long
	short short_var{ -32768 };	//2 Bytes
	short int short_int{ 455 };
	signed short signed_short{ 122 };
	signed short int signed_short_int{ -456 };
	unsigned short int unsigned_short_int{ 456 };

	long long_var{ 88 };	//4 or 8 Bytes
	long int long_int{ 33 };
	signed long signed_long{ 44 };
	signed long int signed_long_int{ 44 };
	unsigned long int unsigned_long_int{ 44 };

	long long long_long{ 888 };	//8 bytes
	long long int long_long_int{ 999 };
	signed long long signed_long_long{ 444 };
	signed long long int signed_long_long_int{ 1234 };
	unsigned long long int unsigned_long_long_int{ 1234 };

	std::cout << "Sizeof short " << sizeof(short) << std::endl;
	std::cout << "Sizeof short int" << sizeof(short int) << std::endl;
	std::cout << "Sizeof signed short " << sizeof(signed short) << std::endl;
	std::cout << "Sizeof signed short int " << sizeof(signed short int) << std::endl;
	std::cout << "Sizeof unsigned short int " << sizeof(unsigned short int) << std::endl;

	std::cout << "Sizeof long " << sizeof(long) << std::endl;
	std::cout << "Sizeof long int " << sizeof(long int) << std::endl;
	std::cout << "Sizeof signed long " << sizeof(signed long) << std::endl;
	std::cout << "Sizeof signed long int " << sizeof(signed long int) << std::endl;
	std::cout << "Sizeof unsigned long int " << sizeof(unsigned long int) << std::endl;

	std::cout << "Sizeof long long " << sizeof(long long) << std::endl;
	std::cout << "Sizeof long long int " << sizeof(long long int) << std::endl;
	std::cout << "Sizeof signed long long " << sizeof(signed long long) << std::endl;
	std::cout << "Sizeof signed long long int " << sizeof(signed long long int) << std::endl;
	std::cout << "Sizeof unsigned long long int " << sizeof(unsigned long long int) << std::endl;

	return 0;
}