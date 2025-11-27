#include<stdio.h>
int sum2();
void main()
{
	printf("without arguments and with return values\n");
	printf("%d",sum2());
	printf("\n excecution completed");
}
    int sum2()
{
    int a=10,b=20;
    return a+b;	
}
