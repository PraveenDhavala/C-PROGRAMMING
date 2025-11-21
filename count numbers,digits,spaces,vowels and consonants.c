#include<stdio.h>
int main()
{
	char a[30];
		int i,v=0,c=0,s=0,d=0;
	 scanf("%[^\n]",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		v++;
	else if(a[i]==' ')
	s++;
	else if(a[i]<='9'&&a[i]>='0')
	d++;
	else
	c++;
}
printf("Vowels are : %d\n",v);
printf("Consonants are : %d\n",c);
printf("Spaces are : %d\n",s);
printf("Digits are : %d\n",d);

return 0;
	
}
