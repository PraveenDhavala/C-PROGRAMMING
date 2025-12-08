#include <stdio.h>
#include <string.h>
void my_reverse(char *s){
    char *l=s,*r=s+strlen(s)-1,t;
    while(l<r){ t=*l;*l=*r;*r=t; l++;r--; }
}
int main(){
    char s[100];
    gets(s);
    my_reverse(s);
    printf("%s\n",s);
    return 0;
}

