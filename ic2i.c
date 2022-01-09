#include<stdio.h>
int main()
{ int a,b,add,sub,mul;
  float div;
  printf("enter two no.s");
  scanf("%d %d",&a,&b); 
  add = a + b;
  sub = a - b;
  mul = a * b;
 div = a /(float) b;
   printf("ADD = %d, SUB = %d, MUL = %d, DIV = %f",add,sub,mul,div);  
 return 0;
}
