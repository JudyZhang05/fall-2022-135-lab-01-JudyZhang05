/* 
 * Author: Judy Zhang
 * Course: CSCI-135
 * Instructor: Professor Zamasky
 * Assignment: Task A. Find the smaller of two integers.
 * Program asks user for two numbers then compares them to print out the lower number.
 */

#include <iostream>
using namespace std;

int main() {
	int first; int second;
	cout << "Enter the first number: ";
	cin >> first;
	cout << "Enter the second number: ";
	cin >> second;

	cout << endl;

	if (first < second){
		cout << "The smaller of the two is: " << first << endl;
	}
	else{
		cout << "The smaller of the two is " << second << endl;
	}
	return 0;
}
