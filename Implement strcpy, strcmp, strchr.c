#include <stdio.h>
char *my_strcpy(char *d,const char *s){
    char *p=d; while((*p++=*s++)); return d;
}
int my_strcmp(const char *a,const char *b){
    while(*a && *a==*b){a++;b++;}
    return (unsigned char)*a-(unsigned char)*b;
}
char *my_strchr(const char *s,int c){
    while(*s){if(*s==(char)c) return (char*)s; s++;}
    return c==0?(char*)s:NULL;
}
int main(){
    char s1[100]="Hello", s2[100];
    my_strcpy(s2,s1);
    printf("Copy: %s\n",s2);
    printf("Cmp(Hello,Help)=%d\n",my_strcmp("Hello","Help"));
    char *p=my_strchr("abcdef",'d');
    if(p) printf("Found: %s\n",p);
    return 0;
}

