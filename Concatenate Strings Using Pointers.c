#include <stdio.h>
void my_strcat(char *d,const char *s){
    while(*d) d++;
    while((*d++=*s++));
}
int main(){
    char a[200]="Hello ";
    char b[100]="World";
    my_strcat(a,b);
    printf("%s\n",a);
    return 0;
}

