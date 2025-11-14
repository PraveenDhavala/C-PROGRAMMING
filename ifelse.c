#include <stdio.h>
int main()
{
int a,i,b;
scanf("%d%d", &a, &b);
for (i = a; i <= b; i++)
{
if (i < 10)
{
if (i == 1) printf("one");
else if (i == 2) printf("two");
else if (i == 3) printf("three");
else if (i == 4) printf("four");
else if (i == 5) printf("Five");
else if (i == 6) printf("Six");
else if (i == 7) printf("seven");
else if (i == 8) printf("Eight");
else if (i == 9) printf("Nine");
}
else
{
if (i % 2 == 0)
printf("even");
else printf("odd");
}
printf("\n");
}
return 0;
}
