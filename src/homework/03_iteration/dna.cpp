#include "dna.h"

using std::cout;

/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content (const string &dna)
{
    double count = sequence.length();
    double gc_count =0;


}

/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

string get_reverse_string(string dna)
{

    return string();
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

string get_dna_complement(string dna);

{
    get_reverse_string(dna);
    string reg = dna;


    if (dna[i]== 'G')
    {
        i == 'C';
    }

    else if (dna[i]=='C')
    {
        i=='G';
    }

    else if (dna[i]=='A')
    {
        i=='T';
    }

    else if (dna[i]=='T')
    {
        i=='A';
    }

    else
    {
        cout << "INVALID"
    }

    return string();

}
