#include <iostream>

int main()
{
	int favorite_number;
	std::cout << "Enter your favorite number between 1 and 100: \n";
	std::cin >> favorite_number;

	std::cout << "Amazing! That's my favorite number too!" << std::endl;
	std::cout << "No really!! " << favorite_number; std::cout << " Is my favorite number!" << std::endl;

	return 0;

}