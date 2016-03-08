/*
OVERVIEW: 	Given date of births of two persons as inputs, return 1 if person one is elder,
2 if person two is elder, 0 if both are of same age.
Example: isOlder("24-07-2000", "25-07-2000") should return 1 as person one
is elder than person two.

INPUTS: 	DOBs of two persons as parameters in the format "DD-MM-YYYY".

OUTPUT: 	1 if person one is elder, 2 if person two is elder, 0 if both are of same age.

ERROR CASES: Return -1 if any DOB is invalid.

NOTES: 		Don't use any built-in C functions for comparisions. You are free to write any helper functions.
*/
#include<string.h>

int isOlder(char *dob1, char *dob2) 
{
	int i = 0, day1 = 0, day2 = 0, month1 = 0, month2 = 0, year1 = 0, year2 = 0;
	if (dob1[2] != '-' || dob1[5] != '-' || dob2[2] != '-' || dob2[5] != '-' || strlen(dob1)!=10 || strlen(dob2)!=10)
	{
		return -1;
	}
	while (i<10)
	{
		if (i == 2 || i == 5)
		{
			i++;
		}
		else if (i<2)
		{
			day1 = day1 * 10 + (dob1[i] - '0');
			day2 = day2 * 10 + (dob2[i] - '0');
			i++;
		}
		else if (i>2 && i<5)
		{
			month1 = month1 * 10 + (dob1[i] - '0');
			month2 = month2 * 10 + (dob2[i] - '0');
			i++;
		}
		else
		{
			year1 = year1 * 10 + (dob1[i] - '0');
			year2 = year2 * 10 + (dob2[i] - '0');
			i++;
		}

	} // end of while loop





	if (year1 != year2)
	{
		if (year1 < year2) return 1;
		else return 2;
	}
	else
	{
		if (month1 != month2)
		{
			if (month1 < month2) return 1;
			else return 2;
		}
		else
		{
			if (day1 != day2)
			{
				if (day1 < day2) return 1;
				else return 2;
			}
			else return 0;
		}
	}
	return -1;
}
