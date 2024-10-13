#include <iostream>
#include <vector>
#include <iomanip>
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

	//int length{}, width{}, height{};
	//double base_cost{ 2.50 };

	//const int tier1_threshold{ 100 };
	//const int tier2_theshold{ 500 };

	//int max_dimension_length{ 10 };

	//double tier1_surcharge{ 0.10 };
	//double tier2_surcharge{ 0.25 };

	//int package_volume{};

	//cout << "Welcome to the package cost calculator" << endl;
	//cout << "Enter length, width, and height of the package seperated by spaces: ";
	//cin >> length >> width >> height;

	//if (length > max_dimension_length || width > max_dimension_length || height > max_dimension_length){
	//	cout << "Sorry package rejected - dimesion exceeded" << endl;
	//}
	//else {
	//	double package_cost{};
	//	package_volume = length * width* height;
	//	package_cost = base_cost;

	//	if (package_volume > tier2_theshold) {
	//		package_cost += package_cost * tier2_surcharge;
	//		cout << " adding tier 2 surcharge\n";
	//	}
	//	else if (package_volume > tier1_threshold) {
	//		package_cost += package_cost * tier1_surcharge;
	//		cout << " adding tier 1 surcharge\n";
	//	}
	//	cout << "The volume of your package is: " << package_volume << endl;
	//	cout << "Your package will cost $" << package_cost << " to ship \n";
	//}

	/*char letter_grade{};

	cout << "Enter the letter grade you expect on the exam: ";
	cin >> letter_grade;

	switch (letter_grade) {
	case'a':
	case'A':
		cout << "You need a 90 or above, study hard!\n";
		break;
	case 'b':
	case 'B':
		cout << "You need 80 - 89 for a B, go study \n";
		break;
	case 'c':
	case 'C':
		cout << "You need a 70 - 79 for an average grade\n";
		break;
	case 'd':
	case'D':
		cout << "Hmm, you should strive for a better grade. All you need is 60 - 69\n";
		break;
	case 'f':
	case'F':
	{
		char confirm{};
		cout << "Are you sure (Y/N)?";
		cin >> confirm;
		if (confirm == 'y' || confirm == 'Y')
			cout << "Ok, I guess you didn't study...\n";
		else if (confirm == 'n' || confirm == 'N')
			cout << "Good- go study!\n";
		else
			cout << "WRONG CHOICE!!!\n";
		break;
	}

	default:
		cout << "Sorry that is not a vaild grade.";
	}*/

	/*enum Direction {
		left, right, up, down
		};

	Direction heading{ left };

	switch (heading) {
	case left:
		cout << "Going left" << endl;
		break;
	case right:
		cout << "Going right" << endl;
		break;
	default:
		cout << "Ok\n";
	}*/

	//int num{ };
	//
	//cout << "enter an integer: ";
	//cin >> num;
	//
	//if (num % 2 == 0)
	//cout << num << " is even\n";
	//
	//else
	//cout << num << " is odd\n";
	//
	//cout << num << " is " << ((num % 2 == 0) ? "even" : "odd\n");

//int num1{}, num2{};
//
//cout << "Enter two integers separated by a space: ";
//cin >> num1 >> num2;
//
//if (num1 != num2) {
//	cout << "Largest: " << ((num1 > num2)? num1 : num2) << endl;
//	cout << "Smallest: " << ((num1 < num2)? num1 : num2) << endl;
//}else {
//	cout << "The numbers are the same\n";
//}
	
//for (int i{ 1 }; i <= 10; ++i)
//cout << i << endl;

//for (int i{ 1 }; i <= 10; i+=2)
//cout << i << endl;

//for (int i{ 10 }; i > 0; --i)
//cout << i << endl;
//cout << "Blast off!\n";


	/*for (int i{ 10 }; i <= 100; i += 10) {		
		if (i % 15 == 0)
		cout << i << endl;
	}*/

	//for (int i{ 1 }, j{ 5 }; i <= 5; ++i, ++j)
	//cout << i << " + " << j << " = " << (i + j) << endl;

	//for (int i{ 1 }; i <= 100; ++i) {
	//	cout << i;
	//	if (i % 10 == 0) 
	//		cout << endl;
	//	else 
	//		cout << " ";
	//}

	//for (int i{ 1 }; i <= 100; ++i) {
	//	cout << i << ((i % 10 == 0) ? "\n" : " ");
	//}

	//vector<int> nums{ 10, 20, 30, 40, 50 };
	//for (unsigned i{ 0 }; i < nums.size(); ++i)
	//	cout << nums[i] << endl;

	/*int sum{ 0 };
	for (int i{ 1 }; i <= 15; i += 2) {
		sum += i;
	}
	cout << sum;*/ // 64

	//int scores[]{ 10, 20, 30 };
	//
	//for (auto score : scores) 
	//	cout << score << endl;

	//vector<double> temperatures{ 87.9, 77.9, 80.0, 72.5 };
	//double average_temp{};
	//double total{};
	//
	//for (auto temp : temperatures)
	//total += temp;
	//
	//if (temperatures.size() != 0)
	//average_temp = total / temperatures.size();
	//
	//cout << fixed << setprecision(1);
	//cout << "Average temperature is " << average_temp << endl;

	//for (auto val : { 1, 2, 3, 4, 5 })
	//cout << val << endl;

	//for (auto c : "This is a test")
	//if(c != ' ')
	//cout << c;

	//for (auto c : "This is a test")
	//if (c == ' ')
	//cout << "\t";
	//else
	//cout << c;

	//int num{};
	//cout << "Enter a positive integer - start the countdown :";
	//cin >> num;
	//while (num > 0){
	//	cout << num << endl;
	//	--num;
	//}
	//cout << "\nBlastoff!" << endl;

	/*int num{};
	cout << "Enter a positive integer to count up to:";
	cin >> num;

	int i{ 1 };
	while (num >= i) {
		cout << i << endl;
		i++;
	}*/

	//int number{};

	//cout << "Enter a positive integer less than 100: ";
	//cin >> number;

	//while (number >= 100) {
	//	cout << "Enter an integer less than 100" << endl;
	//	cin >> number;
	//}

	//cout << "\nThanks!" << endl;


	//bool done{false};
	//int number{ 0 };

	//while (!done) {
	//	cout << "Enter an integer between 1 and 5: " << endl;
	//	cin >> number;
	//	if (number <= 1 || number >= 5)
	//		cout << "Out of range, try again\n";
	//	else {
	//		cout << "Thanks!" << endl;
	//		done = true;
	//	}
	//}

//char selection{};
//do {
//	cout << "\n--------------------------------\n";
//	cout << "1. Do this \n";
//	cout << "2. Do that \n";
//	cout << "3. Do something else \n";
//	cout << "Q. Quit \n";
//	cout << "\n Enter yout selection: ";
//	cin >> selection;
//
//	if (selection == '1')
//		cout << "You code 1 - doing this\n";
//	else if (selection == '2')
//		cout << "You chose 2 - doing that \n";
//	else if (selection == '3')
//		cout << "You chose 3 - doing something else \n";
//	else if (selection == 'Q' || selection == 'q')
//		cout << "Goodbye...\n";
//	else
//		cout << "Unknown option -- try again...";
//
//} while (selection != 'q' && selection != 'Q');
//	
	//
	//for (int num1{ 1 }; num1 <= 10; ++num1) {
	//	for (int num2{ 1 }; num2 <= 10; ++num2) {
	//		cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
	//	}
	//	cout << "------------------------\n";
	//}

	//int num_items{};

	//cout << "How many data items do you have? ";
	//cin >> num_items;

	//vector<int> data{};

	//for (int i{ 1 }; i <= num_items; ++i) {
	//	int data_item{};
	//	cout << "Enter data item " << i << ": \n";
	//	cin >> data_item;
	//	data.push_back(data_item);
	//}
	//cout << "\nDisplaying Histogram\n";
	//for (auto val : data) {
	//	for (int i{ 1 }; i <= val; ++i) {
	//		if (i % 5 == 0 || i == 1) // added the 1 just to see
	//			cout << "*";
	//		else
	//			cout << "-";
	//	}
	//	cout << endl;
	//}



	cout << endl;
	return 0;
}