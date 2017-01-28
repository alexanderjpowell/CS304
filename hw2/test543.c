// Alexander Powell
// HW2 - test543.c

#include <stdio.h>

int main ( int argc, char *argv[] ) {
	int i = 0;
	printf("\ncommand line args count=%d\n", argc);
	printf("executable name=%s\n", argv[0]);

	for ( i = 1; i < argc; i++ ) {
		printf( "arg%d=%s\n", i, argv[i] );
	}

	for ( i = 1; i < argc; i++ ) {
		int total = 0;
		int index = 0;

		while (argv[i][index]) {
			total = 10 * total + (argv[i][index] - 48);
			index++;
		}

		int square = total * total;
		printf("The square of arg%d is %d\n", i, square);

	}

	return 0;
}

 /* 
 > ./test543 12 23 22 345

command line args count=5
executable name=./test543
arg1=12
arg2=23
arg3=22
arg4=345
The square of arg1 is 144
The square of arg2 is 529
The square of arg3 is 484
The square of arg4 is 119025
*/