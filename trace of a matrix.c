#include<stdio.h>
int main()
{
	int i,j,r,sum=0;
	printf("Enter the number of row/columns of square matrix:\n");
	scanf("%d",&r);
	int a[r][r];
	printf("Enter the elements of matrix \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		sum=sum+a[i][i];
	}
	printf("Trace of the matrix is: %d",sum);
	return 0;
}
