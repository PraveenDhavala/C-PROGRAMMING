#include<stdio.h>
int main ()
{
	int a[10],key,mid,l,h,f=0,i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&key);
	l=0,h=n-1;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(key==a[mid])
		{
			f++;
			printf("%d found at %d position",key,mid);
			break;
		}
		else if(key<a[mid])
		h=mid-1;
		else
		l=mid+1;
	}
	if(!f)
	printf("%d is Not Found",key);
	return 0;
}
