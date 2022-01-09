#include<stdio.h>
int main()
{
 int gross;
int  base = 5000;
float da = base*(0.70),hra = base *(0.15),ma= base*(0.05);
  gross = (float)(base + da+ hra + ma);
printf("the gross salaray is Rs %d",gross);

return 0;
}
