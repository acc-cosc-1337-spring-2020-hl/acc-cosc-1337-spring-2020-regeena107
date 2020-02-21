//write include statements
#include "dna.h"

//write using statements
using std::string;
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
    int option;
    string sequence;

    cout << "Enter 1 for Get GC Content or 2 for Get DNA Complement: ";
    cin>> option;

    cout << "Enter a DNA sequence: ";
    cin>> sequence;

    if (option == 1)
    {
         cout << get_gc_content(dna);
    }

    if (option == 2)
    {
        cout << get_gc_complement(dna);
    }
	return 0;
}
