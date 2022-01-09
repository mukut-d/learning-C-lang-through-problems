#include<stdio.h>
#include<math.h>
int main()
{ int u,s;
  float v,f; 
  printf("enter initial vel");
 scanf("%d",&u);
  printf("enter acc");
  scanf("%f",&f);
  printf("enter displacement");
 scanf("%d",&s);
  v =sqrt( u*u + 2*f*s);
  printf("final velo is = %f",v);
return 0;
}
