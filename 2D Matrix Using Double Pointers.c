#include <stdio.h>
#include <stdlib.h>
int main(){
    int r,c,i,j;
    scanf("%d%d",&r,&c);
    int **m = (int**)malloc(r*sizeof(int*));
    for(i=0;i<r;i++) m[i]=(int*)malloc(c*sizeof(int));
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&m[i][j]);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++) printf("%d ",m[i][j]);
        printf("\n");
    }
    for(i=0;i<r;i++) free(m[i]);
    free(m);
    return 0;
}

