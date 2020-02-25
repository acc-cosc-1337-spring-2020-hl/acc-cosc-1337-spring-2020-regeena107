#include "dna.h"
using std::size;


/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(const string& dna)
{
	//start counter and create gc string variable
	double percent;
	double count = 0.0;
	
	//Have a user put in 8 letters made up of actg
	
	//create loops to get count of letters g and c
	for (double i = 0; i < dna.size(); i++)
	{
		if (dna[i] == 'G'  || dna[i] == 'C')
			count++;
	}
	percent = count / dna.size();
	return percent;
}






/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string dna)
{

	string reverse;
	for (int i = dna.size() - 1; i >= 0; i--)
	{
		reverse = reverse.append(1, dna[i]);
	
	
	}

	return reverse;
}




/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
	replace A with T, T with A, C with G and G with C
c. return string

*/
string get_dna_complement(string dna)
{
	string reg = get_reverse_string(dna);
	
	for (double i = 0; i < reg.size(); i++)
	{
		if (reg[i] == 'G')
		{
			reg[i] = 'C';
		}

		else if (reg[i] == 'C')
		{
			reg[i] = 'G';
		}
		else if (reg[i] == 'A')
		{
			reg[i] = 'T';
		}
		else if (reg[i] = 'T')
		{
			reg[i] = 'A';
		}
	}

	return reg;
}

