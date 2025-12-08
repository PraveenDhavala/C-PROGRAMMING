#include <stdio.h>
int main(){
    char s[200];
    int f[256]={0}, i;
    fgets(s,200,stdin);
    for(i=0;s[i];i++) f[(unsigned char)s[i]]++;
    for(i=0;s[i];i++){
        if(s[i]!='\n' && f[(unsigned char)s[i]]==1){
            printf("%c\n",s[i]);
            return 0;
        }
    }
    printf("None\n");
    return 0;
}

