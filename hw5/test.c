/*
int choice1(int x)
{
	return (x >> 31) << 31;
}
*/

/*
int choice2(int x)
{
	unsigned u = x;
	return u >> 31;
}
*/

/*
int choice3(int x)
{
	return (x << 31) >> 31;
}
*/

/*
int choice4(int x)
{
	return (x < 0U);
}
*/

/*
int choice5(int x)
{
	return x >> 31;
}
*/

/*
int choice6(int x)
{
	return (x < 0);
}
*/


#include <stdio.h>

int main()
{
	int x = -8;
	unsigned a = 0U;
	int out = (x >> 31) << 31;
	printf("%x\n", x);
	printf("%d\n", (x<a));
	return 0;
}
