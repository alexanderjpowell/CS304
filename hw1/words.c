#include <stdio.h>

int main() {
	int count = 1;
	printf("Input: ");
	char c;
	c = getchar();

	while ( c != '\n' ) {
		if ( c == ' ' ) {
			count++;
		}
		c = getchar();
	}
	printf("%d\n", count);
	return 0;
}


/*
In a file named words.c, write a program that counts the number of words in the line typed by the user, 
defined as the number of sequences of non-space characters — or, equivalently, 
the number of times a non-space character is preceded either by a space or by the beginning of the line. 
Here are some sample inputs and the corresponding outputs.

Input	Output
hello world	2
hello   world	2
4 words - right?	4
   word   word   	2
   */