#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	vector<string> stooges{ "Larry," "Moe," "Curly" };

	for (auto str : stooges)
		str = "Funny";

	for (auto str : stooges)
		cout << str << endl;
	
	for (auto &str : stooges)
		str = "Funny";

	for (auto str : stooges)
		cout << str << endl;








	return 0;
}

