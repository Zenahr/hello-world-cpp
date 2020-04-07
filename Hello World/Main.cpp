// Everything that begins with a hash(#) is a preprocessor statement.
// includes usually are header files.
#include <iostream>

// main() is the entry point.
// Main functions implicitly return an int, so you don't need to return anything explicitly in the main() function.
int main()
{
	// << ---> overloaded operator. ---> just a function shorthand.
	// Without "<<" Hello World would look like this:
	// std::cout.print("Hello, World!").print(std::endl);
	// << pushes parameters into cout
	std::cout << "Hello, World!" << std::endl;
	std::cin.get();
}