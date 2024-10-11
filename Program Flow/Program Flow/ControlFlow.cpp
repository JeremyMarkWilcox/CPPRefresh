#include <iostream>

using namespace std;

int main() {
	/*int num{};
	const int min{ 10 };
	const int max{ 100 };

	cout << "Enter a number between " << min << " and " << max << ": ";
	cin >> num;

	if (num >= min) {
		cout << "\n==================== If statemnt 1 =====================\n";
		cout << num << " is greater than or equal to " << min << endl;

		int diff{ num - min };
		cout << num << " is " << diff << " greater than " << min;
	}

	if (num <= min) {
		cout << "\n==================== If statemnt 2 =====================\n";
		cout << num << " is less than or equal to " << max << endl;

		int diff{ max - num };
		cout << num << " is " << diff << " less than " << max;
	}

	if (num >= min && num <= max) {
		cout << "\n==================== If statemnt 3 =====================\n";
		cout << num << " is in range " << endl;
		cout << " This means statements 1 and 2 must also display!! \n";
	}

	if (num == min || num == max) {
		cout << "\n==================== If statemnt 4 =====================\n";
		cout << num << " is right on a boundary " << endl;
		cout << "This means all 4 statements are displayed!! \n";
	}*/

	//int num{};
	//const int target{ 10 };

	//cout << "Enter a number and I'll compare it to " << target << ": " << endl;
	//cin >> num;

	//if (num >= target) {
	//	cout << "\n=================================\n";
	//	cout << num << " is greater than or equal to " << target << endl;
	//	int diff{ num - target };
	//	cout << num << " is " << diff << " greater than " << target << endl;
	//}
	//else {
	//	cout << "\n=================================\n";
	//	cout << num << " is less than " << target << endl;
	//	int diff{ target - num };
	//	cout << num << " is " << diff << " less than " << target << endl;

	//}

	/*int score{};

	cout << "Enter your score on the exam (0-100) : ";
	cin >> score;
	char letter_grade{};

	if (score >= 0 && score <= 100) {
		if (score >= 90)
			letter_grade = 'A';
		else if (score >= 80)
			letter_grade = 'B';
		else if (score >= 70)
			letter_grade = 'C';
		else if (score >= 65)
			letter_grade = 'D';
		else
			letter_grade = 'F';
		cout << "Your grade is : " << letter_grade << endl;

		if (letter_grade == 'F') {
			cout << "Sorry, you must repeat the class\n";
		}
	}*/

	int length{}, width{}, height{};
	double base_cost{ 2.50 };

	const int tier1_threshold{ 100 };
	const int tier2_theshold{ 500 };

	int max_dimension_length{ 10 };

	double tier1_surcharge{ 0.10 };
	double tier2_surcharge{ 0.25 };

	int package_volume{};

	cout << "Welcome to the package cost calculator" << endl;
	cout << "Enter length, width, and height of the package seperated by spaces: ";
	cin >> length >> width >> height;

	if (length > max_dimension_length || width > max_dimension_length || height > max_dimension_length){
		cout << "Sorry package rejected - dimesion exceeded" << endl;
	}
	else {
		double package_cost{};
		package_volume = length * width* height;
		package_cost = base_cost;

		if (package_volume > tier2_theshold) {
			package_cost += package_cost * tier2_surcharge;
			cout << " adding tier 2 surcharge\n";
		}
		else if (package_volume > tier1_threshold) {
			package_cost += package_cost * tier1_surcharge;
			cout << " adding tier 1 surcharge\n";
		}
		cout << "The volume of your package is: " << package_volume << endl;
		cout << "Your package will cost $" << package_cost << " to ship \n";
	}










	cout << endl;
	return 0;
}