/*
OVERVIEW: Given a string, return the letter at Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the letter at Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/

char KthIndexFromEnd(char *str, int K) {
	int length = 0;
	char *temp = str;
	
	if (!str)
		return '\0';
	while (*temp != '\0'){
		temp++;
		length++;
	}
	length--;
	if (length == 0)
		return '\0';
	if (K > length || K<0)
		return '\0';
	if (K<=length)
		return *(str+(length - K));
	
}