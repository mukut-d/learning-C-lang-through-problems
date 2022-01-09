#include<stdio.h>
int main()
{             // swaping two numbers without using third variable.
 int a,b;
 printf("enter two no.s");
 scanf("%d %d",&a, &b);
 a = a + b;   // 7+2 = 9
 b = a - b;   // 9-2 = 7 = b
 a = a - b;   // 9-7 = 2 = a
 printf("%d %d",a,b);
  return 0;
}
