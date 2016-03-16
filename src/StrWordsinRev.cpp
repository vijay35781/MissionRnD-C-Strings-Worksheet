/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>

void str_words_in_rev(char *input, int len){
	strrev(input);
	int i;
	int j = 0;
	int temp;
	while (j<len)
	{
		i = j;
		while (input[j] != ' '&&input[j] != '\0')
			j++;
		temp = j - 1;
		while (i<temp)
		{
			char ch = input[i];
			input[i] = input[temp];
			input[temp] = ch;
			i++;
			temp--;
		}
		j++;

	}
	
}
