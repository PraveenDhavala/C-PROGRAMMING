#include<stdio.h>
void sum();
void main()
{
	printf("without arguments and without return values\n");
	sum();
	printf("\n excecution completed");
}
    void sum()
{
    int a,b;
	printf("enter a,b values");scanf("%d%d",&a,&b);
	printf("addition=%d",a+b);
	
}
