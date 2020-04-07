#include <iostream>

// Function declaration.
// can also be just:
// void Log (cont char*); // No parameter names included.
void Log(const char* message);

int main()
{
	Log("Hello, World!");
	std::cin.get();
}