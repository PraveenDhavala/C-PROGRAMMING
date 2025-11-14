#include<stdio.h>
int main ()
{
int a,b;
float c;
double d,e;
scanf("%d%d%f%lf",&a,&b,&c,&d);
e=(a/b*c)-b+(a*d/3);
printf("e=%1f\n",e);
return 0;
}

