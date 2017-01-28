#include <stdio.h>
int main() {

  int ar[10]={1,2,3,4,5,6,7,8,9,10}, *p1;
  char s1[10]="abcdefgh", s2[10]="1234567", *p2;

  p1 = ar;
  printf("ar is %p\n", ar);
  printf("The following addresses are %p %p %p\n", p1+15, &ar[14], p1-2);

  p2 = &s1[2];
  printf("s1 is %p\n", s1);
  printf("The following addresses are %p %p %p\n", p2+15, &s1[14], p2-2);

  *p2 = *p2 +1;
  *(s2+4) = 'z';
  printf("The following strings are %s %s %s\n", s1, s2, p2);

  return 0;
}