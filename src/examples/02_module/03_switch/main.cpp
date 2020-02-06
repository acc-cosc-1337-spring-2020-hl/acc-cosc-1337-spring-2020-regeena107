#include<iostream>
#include "switch.h"

using std::cin; using std::cout;

int main() 
{
	int option;

	cout << "Enter a number (1-4): ";
	cin >> option; 

	string result = menu(option);

	cout << result;

	return 0;
}