/*
 * Author: Judy Zhang 
 * Course: CSCI-135 
 * Instructor: Professor Zamasky 
 * Assignment: Task D. Number of days in a given month Lab1D
 * Program asks the user the year and the month and prints the number of days in that month.
 */
#include <iostream>
using namespace std;

int main() {
	int year; int month; int days = 30;
	string leap;
	cout << "Enter year: ";
	cin >> year;
	cout << "Enter month: ";
	cin >> month;

	if (year % 4 != 0){
		leap="noleap";
	}
	else if (year % 100 != 0){
		leap="leap";
	}
	else if (year % 400 != 0){
		leap ="noleap";
	}
	else{
		leap="leap";
	}

	if (leap == "leap"){
		if (month == 2){
			days -= 1;
		       	cout << days << " days" << endl;
		}
		else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month ==12){
			days += 1;
		       	cout << days << " days" << endl;
		}
		else{
			cout << days << " days" << endl;
		}
	}
	else {
		if (month == 2){
			days -= 2;
		       	cout << days << " days" << endl;
		}
		else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month ==12){
			days += 1;
		       	cout << days << " days" << endl;
		}
		else {
			cout << days << " days" << endl;
		}
	}
	return 0;
}

