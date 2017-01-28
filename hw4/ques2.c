#include <stdio.h>

int main(void) {
	char blocks[3] = {'A', 'B', 'C'};
	printf("%p\n", blocks);
	char *ptr = &blocks[0];
	printf("%p\n", ptr);
	char temp;
	printf("%p\n", temp);

	printf("%s\n", " ");

	temp = blocks[0];
	printf("%p\n", temp);
	temp = *(blocks + 2);
	printf("%p\n", temp);
	temp = *(ptr + 1);
	printf("%p\n", temp);
	temp = *ptr;
	printf("%p\n", temp);

	printf("%s\n", " ");

	ptr = blocks + 2;
	printf("%p\n", ptr);
	temp = *ptr;
	printf("%p\n", temp);
	temp = *(ptr - 1);
	printf("%p\n", temp);

	printf("%s\n", " ");

	ptr = blocks;
	printf("%p\n", ptr);
	temp = *++ptr;
	printf("%p ", ptr);
	printf("%p\n", temp);
	temp = ++*ptr;
	printf("%p ", ptr);
	printf("%p\n", temp);
	temp = *ptr++;
	printf("%p ", ptr);
	printf("%p\n", temp);
	temp = *ptr;
	printf("%p\n", temp);

	return 0;
}