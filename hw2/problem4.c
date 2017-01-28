#include <stdio.h>

int main() {
	int i, j, *p, *q;
	// The following line means i=5; j=i;
	j=(i=5);  //1
	printf("Line 1: I is: %d and J is %d\n", i, j);
	// The following line means the logical value of i==4 will be assigned to j. That is, if i is equal to 4, then j=1; otherwise j=0; 
	j=(i==4);  //2
	printf("Line 2: I is: %d and J is %d\n", i, j);
	j=++i;  //3
	printf("Line 3: I is: %d and J is %d\n", i, j);
	j=i--;  //4
	printf("Line 4: I is: %d and J is %d\n", i, j);
	p=&i;  //5
	printf("Line 5: I is: %d and J is %d\n", i, j);
	q=&j;  //6
	printf("Line 6: I is: %d and J is %d\n", i, j);
	*p=3;  //7
	printf("Line 7: I is: %d and J is %d\n", i, j);
	*q=*p+1;  //8
	printf("Line 8: I is: %d and J is %d\n", i, j);
	i=8;  //9
	printf("Line 9: I is: %d and J is %d\n", i, j);
	j=9;  //10
	printf("Line 10:I is: %d and J is %d\n", i, j);
	(*p)++;  //11
	printf("Line 11:I is: %d and J is %d\n", i, j);
	(*q)++;  //12
	printf("Line 12:I is: %d and J is %d\n", i, j);
	q=p;  //13
	printf("Line 13:I is: %d and J is %d\n", i, j);
	(*q)--;  //14
	printf("Line 14:I is: %d and J is %d\n", i, j);
	return 0;
}

// In the following program, for each line, write down the values of i and j.  