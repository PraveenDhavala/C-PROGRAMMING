#include <stdio.h>
int bin_iter(int a[],int n,int x){
    int l=0,r=n-1,mid;
    while(l<=r){
        mid=(l+r)/2;
        if(a[mid]==x) return mid;
        else if(a[mid]<x) l=mid+1;
        else r=mid-1;
    }
    return -1;
}
int bin_rec(int a[],int l,int r,int x){
    if(l>r) return -1;
    int m=(l+r)/2;
    if(a[m]==x) return m;
    if(a[m]<x) return bin_rec(a,m+1,r,x);
    return bin_rec(a,l,m-1,x);
}
int main(){
    int n,a[100],x,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&x);
    printf("%d\n",bin_iter(a,n,x));
    printf("%d\n",bin_rec(a,0,n-1,x));
    return 0;
}

