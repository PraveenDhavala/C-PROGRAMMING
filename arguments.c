#include<stdio.h>
int array1(int[],int);
void main()
{
	int a[100],n,i;
	printf("enter n values");
	scanf("%d",&n);
	for(i=0;i<n;i++);
	scanf("%d",&a[i]);
	array1(a,n);
}
int array1(int m[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		printf("%d",sum);
	}
}
