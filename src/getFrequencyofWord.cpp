/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){
	int freQ_count = 0;
	for (int index1 = 0; str[index1] != '\0'; index1++)
	{
		int index2;
		for (index2 = 0; word[index2] != '\0'; index2++)
			if (str[index1 + index2] != word[index2])
				break;
		if (word[index2] == '\0')
			freQ_count++;
	}
	return freQ_count;
	}


int count_word_int_str_way_2_recursion(char *str, char *word){
	int index1 = 0;
	if (str[index1] == '\0')
		return 0;
	while (word[index1] != '\0'){
		if ((str[index1] == '\0') || (word[index1] != str[index1]))
			return count_word_int_str_way_2_recursion(str + 1, word);
		index1++;
	}
	return 1 + count_word_int_str_way_2_recursion(str + 1, word);
	}

