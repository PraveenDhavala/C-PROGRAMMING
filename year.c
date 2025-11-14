#include<stdio.h>
int main ()
{
	int year;
	printf("Enter Year :: ");
	scanf("%d",&year);
	if(year%4==0)
	printf("Leap Year");
	else
	printf("Non Leap Year");
	return 0;
}
