#include <iostream>

int main() {
	const int dollars_value{ 100 };
	const int quarters_value{ 25 };
	const int dimes_value{ 10 };
	const int nickels_value{ 5 };
	const int pennies_value{ 1 };

	int change_amount;

	std::cout << "Enter an amount in cents: \n";
	std::cin >> change_amount;

	int balance{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};

	dollars = change_amount / dollars_value;
	balance = change_amount % dollars_value;
	
	quarters = balance / quarters_value;
	balance %= quarters_value;
	
	dimes = balance / dimes_value;
	balance %= dimes_value;
	
	nickels = balance / nickels_value;
	balance %= nickels_value;
	
	pennies = balance / pennies_value;
	balance %= pennies_value;





	std::cout << "\nYou can provide this change as follows: " << std::endl;
	std::cout << "dollars : " << dollars << std::endl;
	std::cout << "quarters : " << quarters << std::endl;
	std::cout << "dimes : " << dimes << std::endl;
	std::cout << "nickels : " << nickels << std::endl;
	std::cout << "pennies : " << pennies << std::endl;

	return 0;
}