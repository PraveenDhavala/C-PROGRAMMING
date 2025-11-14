#include<stdio.h>
#include<math.h>
int main()
{
int p,t,r;
float si,ci;
printf("Enter Values of p t r : ");
scanf("%d%d%d",&p,&t,&r);
si=(p*t*r)/100.0;
ci=p*pow(1+r/100.0,t)-p;
printf("Simple interest is %f\n",si);
printf("Compound interest is %f",ci);
return 0;
}
