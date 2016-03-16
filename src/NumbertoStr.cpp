/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>


void number_to_str(float number, char *str,int afterdecimal){
	int r, n = number, i = 0;
	float n2;
	if (number < 0.0)
	{

n2 = -1 * number - (-1 * n);
	}
	else
	{
n2 = number - n;
	}
	i = 1;
	int j = 1;
	while (i <= afterdecimal)
	{
		j = j * 10;
		i++;
	}
	j = n2 *j;
	i = 0;
	if (number < 0)
	{
		n = -n;
		*str++ = '-';
	}
	int r1 = 0;
	
	while (n>0){
		r1 = r1 * 10 + n % 10;
		n = n / 10;
	}
	n = r1;
	r1 = 0;
	while (j>0){
		r1 = r1 * 10 + j % 10;
		j = j / 10;
	}
	j = r1;
	while (n > 0)
	{
		r = n % 10;
		*str++ = r + 48;
		n = n / 10;
	}

	if (j != 0)
	{
		*str++ = '.';
		while (j > 0)
		{
			r = j % 10;
			*str++ = r + 48;
			j = j / 10;
		}
	}
	*str++ = '\0';
}
