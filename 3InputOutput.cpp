#include <iostream>
#include <string>

int main()
{
	//Printing data
	std::cout << "Hello C++20" << std::endl;

	int age{ 21 };
	std::cout << "Age: " << age << std::endl;

	std::cerr << "Error message : Something is wrong" << std::endl;
	std::clog << "Log message : Something happened" << std::endl;
	
	//input
	int age1;
	std::string name;

	std::cout << "Please type your name and age : " << std::endl;
	std::cin >> name >> age1;

	std::cout << "Hello " << name << " you are " << age1 << " years old!" << std::endl;
	
	//input data with spaces
	std::string full_name;
	int age2;

	std::cout << "Please type in your full name and age " << std::endl;

	std::cin.ignore();
	std::getline(std::cin, full_name);
	std::cin >> age2;

	std::cout << "Hello " << full_name							//write a long line in 2 line
		<< " you are " << age2 << " years old!" << std::endl;

	return 0;
}