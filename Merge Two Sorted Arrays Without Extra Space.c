#include <stdio.h>
void swap(int *a,int *b){int t=*a;*a=*b;*b=t;}
int main(){
    int n,m,i,j,a[100],b[100];
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<m;i++) scanf("%d",&b[i]);
    for(i=0;i<n;i++){
        if(a[i]>b[0]){
            swap(&a[i],&b[0]);
            // place b[0] at correct position in b
            int first = b[0];
            for(j=1;j<m && b[j]<first;j++) b[j-1]=b[j];
            b[j-1]=first;
        }
    }
    for(i=0;i<n;i++) printf("%d ",a[i]);
    for(i=0;i<m;i++) printf("%d ",b[i]);
    return 0;
}

