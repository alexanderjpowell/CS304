#include <stdio.h>
void add(int a, int b, int *c);

int main() {
    int x=1,y=2, *z;
    add(x,y,z);
    printf("x=%d, y=%d, and x+y=%d\n", x,y,*z);
    return 0;
}

void add(int a, int b, int *c)
{
	*c=a+b;
}