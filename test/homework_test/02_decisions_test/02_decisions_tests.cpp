#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include"decisions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Testing Letter Grade")
{
    REQUIRE(letter_grade("A") == 4);
    REQUIRE(letter_grade("B") == 3);
    REQUIRE(letter_grade("C") == 2);
    REQUIRE(letter_grade("D") == 1);
    REQUIRE(letter_grade("F") == 0);
    REQUIRE(letter_grade(Invalid Option) == -1);
}

TEST_CASE("Calculate GPA")
{
    REQUIRE(calculate_gpa(12, 45)==3.75);
    REQUIRE(calculate_gpa(120, 390)==3.25);
    REQUIRE(calculate_gpa(90, 180)==2.00);
}