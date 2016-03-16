/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/

char removeSpaces(char *str) {
	int length = 0;
	char *temp = str;
	if (!str)
		return '\0';
	while (*temp != '\0')
	{
		length++;
		if (*temp == ' ')
		{
			str = temp;
			while (*str != '\0')
			{
				*str = *(str + 1);
				str++;
			}
		}

			temp++;
	}
	
	if (length > 0)
		return(*str);
	else
		return '\0';
}