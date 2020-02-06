#include "decision.h"
//Write the function code that returns the product of hours and hourly_rate.

int gross_pay(int hours, int hourly_rate)
{
	if (hours <= 40)
	{
		return hours * hourly_rate;
	}
	else
	{
		return ((hours-40) * 1.5 * hourly_rate) + (40 * hourly_rate);
	}
}

	


