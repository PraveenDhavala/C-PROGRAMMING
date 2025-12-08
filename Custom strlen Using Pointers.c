#include <stdio.h>
int my_strlen(const char *p){
    const char *q=p;
    while(*q) q++;
    return q-p;
}
int main(){
    char s[100];
    gets(s);
    printf("%d\n",my_strlen(s));
    return 0;
}

