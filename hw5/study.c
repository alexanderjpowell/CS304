#include <stdio.h>

int main()
{
	int a = 4;
	int b = a << 5;
	printf("%d\n", b);
	return 0;
}



/*
// PROBLEM 1
#include <stdio.h>

void add(int *a, int *b, int *c);

int main()
{
	int x = 1;
	int y = 2;
	int z;

	add(&x,&y,&z);
	printf("x=%d, y=%d, and x+y=%d\n", x, y, z);

	return 0;
}

void add(int *a, int *b, int *c)
{
	*c = *a + *b;
}
*/