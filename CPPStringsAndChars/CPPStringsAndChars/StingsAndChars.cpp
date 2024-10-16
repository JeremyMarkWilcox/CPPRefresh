#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {

	char first_name[20]{};
	char last_name[20]{};
	char full_name[50]{};
	char temp[50]{};

	//cout << "Please enter your first name: ";
	//cin >> first_name;

	//cout << "Please enter your last name: ";
	//cin >> last_name;
	//cout << "------------------------------------\n";

	//cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters\n";
	//cout << "and your last name, " << last_name << " has " << strlen(last_name) << " characters\n";

	//strcpy_s(full_name, first_name);
	//strcat_s(full_name, " ");
	//strcat_s(full_name, last_name);
	//cout << "Your full name is " << full_name << endl;

	//cout << "Enter your full name: ";
	//cin.getline(full_name, 50);
	//cout << "your full name is " << full_name << endl;

	//cout << "---------------------------------------------\n";
	//strcpy_s(temp, full_name);
	//if (strcmp(temp, full_name) == 0)
	//	cout << temp << " and " << full_name << " are the same" << endl;
	//else
	//	cout << temp << " and " << full_name << " are the same\n";
	//cout << "---------------------------------------------\n";

	//for (size_t i(0); i < strlen(full_name); ++i) {
	//	if (isalpha(full_name[i]))
	//		full_name[i] = toupper(full_name[i]);
	//}
	//cout << "Your full name is " << full_name << endl;

	//cout << "---------------------------------------------\n";
	//if (strcmp(temp, full_name) == 0)
	//	cout << temp << " and " << full_name << " are the same\n";
	//else
	//	cout << temp << " and " << full_name << ": " << strcmp(temp, full_name) << endl;

	//cout << "---------------------------------------------\n";
	//cout << "Result of comparing " << temp << " and " << full_name << ": " << strcmp(temp, full_name) << endl;
	//cout << "Result of comparing " << full_name << " and " << temp << ": " << strcmp(full_name, temp) << endl;

	string s0;
	string s1{ "Apple" };
	string s2{ "Banana" };
	string s3{ "Kiwi" };
	string s4{ "apple" };
	string s5{ s1 };
	string s6(s1, 0, 3);
	string s7(10, 'X');

	cout << s0 << endl;
	cout << s0.length() << endl;

	return 0;
}