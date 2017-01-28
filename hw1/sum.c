#include <stdio.h>

int main() {

	printf("Input: ");
	char c = getchar();
	int total = 0;
	int ind = 0;


	while ( c != '\n' ) {
		if ( c == ' ' ) {
			total = ind + total;
			ind = 0;
		}
		else {
			ind = 10 * ind + (c - 48);
		}
		c = getchar();
	}
	total = total + ind;
	printf("%d\n", total);
	return 0;
}

/*
In a file named sum.c, write a program that assumes the user types several numbers 
separated by single spaces and displays the sum of those numbers. 
For instance, given the input 54 23 10, the output should be 87. 
You can assume that there are no more than 10 numbers, each of which is non-negative and less than 1,000,000.
*/

/*
#include <stdio.h>

int main() {

	printf("Input: ");
	int num = 0;
	char c = getchar();

	while ( c != '\n' ) {
		num = 10 * num + (c - 48);
		c = getchar();

	}

	int square = num * num;
	printf( "%d\n", square );
	return 0;
}
*/