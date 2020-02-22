//write include statements
#include "dna.h"
#include <iostream>
//write using statements
using std::cout;
using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content,
or 2 for Get DNA Complement.  The program will prompt user for a
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as
user enters a y or Y.
*/
int main()
{
	int choice;
	string dna;
	auto repeat = 'Y';
	do
	{
		cout << "Enter 1 or 2: ";
		cin >> choice;

		cout << "Enter the DNA: ";
		cin >> dna;

		if (choice == 1) {
			cout << "GC content: " << get_gc_content(dna);
		}
		else if (choice == 2) {
			cout << "DNA complement: " << get_dna_complement(dna);
		}

		cout << "Continue...? ";
		cin >> repeat;

	} while (repeat == 'y' || repeat == 'Y');



	return 0;
}