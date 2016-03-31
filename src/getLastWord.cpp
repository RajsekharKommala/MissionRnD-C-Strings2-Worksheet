/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	//Checking for if the  input string is null 
	if (str == NULL)
		return NULL;
	///
	char *output;
	int s = 0, v= 0;
	while (str[++v] != '\0')
		if (str[v - 1] == ' ' && str[v] != ' ')
			s = v;

	//getting the last word from the string
	output= (char *)malloc((v - s) * sizeof(char));
	v = 0;

	while (str[s] != '\0' && str[s] != ' ')
		output[v++] = str[s++];
	output[v] = '\0';

	return output;
}

