/*
 * Author: Judy Zhang
 * Course: CSCI-135 
 * Instructor: Professor Maryash 
 * Assignment: Task B. Find the smaller of three integers.
 * Program asks user for three numbers then compares them to print out the lower one of them all. 
 */
#include <iostream>
using namespace std;

int main() {
	int first; int second; int third; 
	cout << "Enter the first number: ";
	cin >> first;
	cout << "Enter the second number: "; 
	cin >> second;
	cout << "Enter the third number: ";
	cin >> third;

	if (first < second && first < third){
		cout << "The smaller of the three is " << first;
	}
	else if (second < first && second < third){
		cout << "The smaller of the three is " << second;
	}
	else{
	       	cout << "The smaller of the three is " << third;
	}
	return 0;
}

