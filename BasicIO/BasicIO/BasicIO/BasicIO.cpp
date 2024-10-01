#include <iostream>

int main() {

	std::cout << "Hello, welcome to Jer's Carpet Cleaning Service\n";

	std::cout << "\nHow many small rooms would you like cleaned? ";
	int number_of_small_rooms{ 0 };
	std::cin >> number_of_small_rooms;

	std::cout << "\nHow many Large rooms would you like cleaned? ";
	int number_of_large_rooms{ 0 };
	std::cin >> number_of_large_rooms;


	const double price_per_small_room{ 25 };
	const double price_per_large_room{ 35 };

	const double sales_tax{ 0.08 };
	const int estimate_expiry{ 30 }; //days

	std::cout << "\n Estimate for carpet cleaning service\n";
	

	std::cout << "Price per small room: $" << price_per_small_room << std::endl;
	std::cout << "Cost : $" << price_per_small_room * number_of_small_rooms << std::endl;
	std::cout << "Tax: $" << price_per_small_room * number_of_small_rooms * sales_tax << std::endl;std::cout << std::endl;
	
	std::cout << "Price per large room: $" << price_per_large_room << std::endl;
	std::cout << "Cost : $" << price_per_large_room * number_of_large_rooms << std::endl;
	std::cout << "Tax: $" << price_per_large_room * number_of_large_rooms * sales_tax << std::endl;std::cout <<
		std::endl;
	
	
	
	std::cout << "=====================================================\n";
	std::cout << "Total estimate: $" << (price_per_small_room * number_of_small_rooms) + (price_per_small_room * number_of_small_rooms * sales_tax) + (price_per_large_room * number_of_large_rooms) + (price_per_large_room * number_of_large_rooms * sales_tax) << std::endl;
	std::cout << "This estimate is vaild for " << estimate_expiry << " days\n";


	return 0;

}