#include<stdio.h>
int main()
{
	char a[30];
	scanf("%[^\n]s",a);
	int i;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		printf("\n");
	else
	printf("%c",a[i]);
}
return 0;
}
