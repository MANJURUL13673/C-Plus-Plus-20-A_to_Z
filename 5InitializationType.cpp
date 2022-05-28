#include <iostream>

int main()
{
	//Braced initializers
	//Variable may contain random garbage value. WARNING
	int elephant_count;

	int lion_count{}; //Initialize to zero

	int dog_count{ 10 };	//Initialize to 10

	int cat_count{ 15 };	//Initialize to 15

	//Can use expression as initializer
	int domesticated_animals{ dog_count + cat_count };

	
	std::cout << elephant_count << std::endl;
	std::cout << lion_count << std::endl;
	std::cout << dog_count << std::endl;
	std::cout << cat_count << std::endl;
	std::cout << domesticated_animals << std::endl;

	//int narrowing_conversion{ 2.9 };	//compile - error
	//Functional initialization
	int narrowing_conversion_functional(2.9);	//information lost. Double to Int
	
	std::cout << narrowing_conversion_functional << std::endl;

	//Assignment initialization
	int bike_count = 2;
	int truck_count = 7;
	int vehicle_count = bike_count + truck_count;
	int narrowing_conversion_assignment = 2.9;

	std::cout << bike_count << std::endl;
	std::cout << truck_count << std::endl;
	std::cout << vehicle_count << std::endl;
	std::cout << narrowing_conversion_assignment << std::endl;

	//Check the size with sizeof
	std::cout << "sizeof int: " << sizeof(int) << std::endl;
	std::cout << "sizeof truck_count: " << sizeof(truck_count) << std::endl;
	return 0;
}