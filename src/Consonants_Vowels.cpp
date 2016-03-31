/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>
void count_vowels_and_consonants(char *str,int *consonants, int *vowels){

	int str_i = -1;
	int consonants_count = 0, vowels_count = 0;
	//checking for null string
	if (str == NULL)
	{
		*consonants=0;
		*vowels=0;
		return;
	}
      //if the string is null then consonants and vowels are 0;;
	while (str[++str_i] != '\0')//str[str_i==0] it is not equal to null then
	{
		if (str[str_i] == 'a' || str[str_i] == 'A' || str[str_i] == 'e' || str[str_i] == 'E' || str[str_i] == 'i' || str[str_i] == 'I' || str[str_i] == 'o' || str[str_i] == 'O' || str[str_i] == 'u' || str[str_i] == 'U')
		{
			vowels_count++;//incremanting the vowels count
		}
		else if ((str[str_i] >= 'A' && str[str_i] <= 'Z') || str[str_i] >= 'a' && str[str_i] <= 'z')
			consonants_count++;//incrementing the consonants count
	}
	*consonants = consonants_count;
	*vowels = vowels_count;
}
