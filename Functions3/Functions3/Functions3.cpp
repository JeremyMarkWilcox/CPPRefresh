#include <iostream>

using namespace std;

unsigned long long fiboancci(unsigned long long n);

unsigned long long fiboancci(unsigned long long n) {
	if (n <= 1)
		return n;
	return fiboancci(n-1) + fiboancci(n-2);
}

int main() {
	cout << fiboancci(5) << endl;
	cout << fiboancci(30) << endl;
	cout << fiboancci(40) << endl;
	return 0;
}