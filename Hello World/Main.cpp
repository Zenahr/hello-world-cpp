#include <iostream>


int main()
{	
	std::cout << "Sizes of some datatypes (in bytes):" << std::endl;
	std::cout << "+---------------------------------+" << std::endl;

	std::cout << "bool: " << sizeof(bool) << " Bytes" << std::endl;
	std::cout << "float: " << sizeof(float) << " Bytes" << std::endl;
	std::cout << "double: " << sizeof(double) << " Bytes" << std::endl;
	std::cout << "+---------------------------------+" << std::endl;

	std::cin.get();	
}