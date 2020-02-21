#define "dna.h"  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE ("Test GC content function")
{
    REQUIRE(get_gc_content(AGCTATAG) == 37.5);
    REQUIRE(get_gc_content(CGCTATAG) == 50.0);
}

TEST_CASE ("Test reverse function")
{
    REQUIRE(get_reverse_string(AGCTATAG) == 'GATATCGA');
    REQUIRE(get_gc_content(CGCTATAG) == GATATCGC);
}

TEST_CASE("Verify complement function")
{
    REQUIRE(get_dna_complement(AAAACCCGGT) == 'ACCGGGTTTT');
    REQUIRE(get_dna_complement(CCCGGAAAAT) == 'ATTTTCCGGG');

}
