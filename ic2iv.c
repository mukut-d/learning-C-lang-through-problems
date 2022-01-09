#include<stdio.h>
int main()
{ int u,t,f;
  float s;
 printf("enter initial vel, time , acceleration");
 scanf("%d %d %d",&u, &t, &f);
 s=((u*t) + (1 *f * t*t)/2.0);
 printf("the displacement is %.2f",s);
return 0;
}
