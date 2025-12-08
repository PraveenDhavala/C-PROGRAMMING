#include<stdio.h>
int height(Node*root){
    if(!root) return 0;
    int lh=height(root->l);
    int rh=height(root->r);
    return (lh>rh?lh:rh)+1;
}

