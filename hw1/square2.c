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
