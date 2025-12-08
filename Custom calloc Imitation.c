#include <stdio.h>
#include <stdlib.h>
void *my_calloc(size_t n, size_t sz){
    unsigned char *p = (unsigned char*)malloc(n*sz);
    if(!p) return NULL;
    for(size_t i=0;i<n*sz;i++) p[i]=0;
    return p;
}
int main(){
    int *a = (int*)my_calloc(5,sizeof(int));
    for(int i=0;i<5;i++) printf("%d ",a[i]);
    free(a);
    return 0;
}

