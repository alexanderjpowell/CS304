/*1. Write a C program to do the following:

Accept an input of integer n;
Print the square of 1, 2, 3, ..., n
Print the sum of the squares computed in the above line. 

Save your program in square.c, compile it and run it:

#gcc -o square square.c
#./square

It will output like the following:

Please input a number: 5
The square of 1 is 1 
The square of 2 is 4 
The square of 3 is 9 
The square of 4 is 16 
The square of 5 is 25 
The sum of the squares is 55 */

#include <stdio.h>
#include <math.h>

int main() {

	int input;
	printf("Please input a number: ");
	scanf("%d", &input);

	int total = 0;

	int i;
	for ( i = 1; i <= input; i++ ) {
		int square = i * i;
		printf("The square of %d is %d", i, square);
		printf("\n");
		total = total + square;
	}

	printf("The sum of the squares is %d", total);
	printf("\n");
	return 0;
}


