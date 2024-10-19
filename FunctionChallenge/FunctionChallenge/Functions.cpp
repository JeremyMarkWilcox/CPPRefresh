#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>

// Function to print the numbers in the vector
void printNumbers(const std::vector<int>& data) {
    if (data.empty()) {
        std::cout << "No numbers have been added yet.\n";
    }
    else {
        std::cout << "Your numbers are: ";
        for (int i : data) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
}

// Function to add a number to the vector
void addNumber(std::vector<int>& data) {
    int num;
    std::cout << "Type in a number: ";
    std::cin >> num;
    data.push_back(num);
    std::cout << "You saved " << num << " to your list of numbers.\n";
}

// Function to calculate and display the mean of the numbers
void displayMean(const std::vector<int>& data) {
    if (data.empty()) {
        std::cout << "No numbers have been added yet.\n";
    }
    else {
        double mean = std::accumulate(data.begin(), data.end(), 0.0) / data.size();
        std::cout << "The mean of your numbers is: " << mean << std::endl;
    }
}

// Function to find and display the smallest number
void displaySmallest(const std::vector<int>& data) {
    if (data.empty()) {
        std::cout << "No numbers have been added yet.\n";
    }
    else {
        int smallest = *std::min_element(data.begin(), data.end());
        std::cout << "The smallest number is: " << smallest << std::endl;
    }
}

// Function to find and display the largest number
void displayLargest(const std::vector<int>& data) {
    if (data.empty()) {
        std::cout << "No numbers have been added yet.\n";
    }
    else {
        int largest = *std::max_element(data.begin(), data.end());
        std::cout << "The largest number is: " << largest << std::endl;
    }
}

int main() {
    std::vector<int> data;
    char selection;

    do {
        std::cout << "\n--------------------------------\n";
        std::cout << "P - Print numbers \n";
        std::cout << "A - Add a number \n";
        std::cout << "D - Display mean of the numbers \n";
        std::cout << "S - Display the smallest number \n";
        std::cout << "L - Display the largest number \n";
        std::cout << "Q - Quit \n";
        std::cin >> selection;
        std::cout << std::endl;

        switch (selection) {
        case 'P':
        case 'p':
            printNumbers(data);
            break;
        case 'A':
        case 'a':
            addNumber(data);
            break;
        case 'D':
        case 'd':
            displayMean(data);
            break;
        case 'S':
        case 's':
            displaySmallest(data);
            break;
        case 'L':
        case 'l':
            displayLargest(data);
            break;
        case 'Q':
        case 'q':
            break;
        default:
            std::cout << "Invalid selection. Please try again.\n";
        }
    } while (selection != 'q' && selection != 'Q');

    return 0;
}