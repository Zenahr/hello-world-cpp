#include <iostream>

int Multiply(int a, int b)
{
	return a * b;
}

void MultiplyAndLog(int a, int b)
{
	std::cout << Multiply(a, b) << "\n";
}

int main()
{
	// std::cout << Multiply(2, 3) << std::endl;
	MultiplyAndLog(2, 3);
	std::cin.get();	
}