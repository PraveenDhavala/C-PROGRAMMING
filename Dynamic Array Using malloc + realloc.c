#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i,*a;
    scanf("%d",&n);
    a = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    int extra; scanf("%d",&extra);
    a = (int*)realloc(a,(n+extra)*sizeof(int));
    for(i=n;i<n+extra;i++) scanf("%d",&a[i]);
    for(i=0;i<n+extra;i++) printf("%d ",a[i]);
    free(a);
    return 0;
}

