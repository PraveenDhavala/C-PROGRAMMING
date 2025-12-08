#include <stdio.h>
int main(){
    char s[200];
    int freq[256]={0}, i;
    fgets(s,200,stdin);
    for(i=0;s[i];i++) freq[(unsigned char)s[i]]++;
    for(i=0;i<256;i++)
        if(freq[i]>0 && i!='\n')
            printf("%c -> %d\n",i,freq[i]);
    return 0;
}

