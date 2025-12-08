#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int key;
    struct node *l,*r;
}Node;
Node* newNode(int k){
    Node* n=(Node*)malloc(sizeof(Node));
    n->key=k;n->l=n->r=NULL;return n;
}
Node* insert(Node* root,int k){
    if(!root) return newNode(k);
    if(k<root->key) root->l=insert(root->l,k);
    else if(k>root->key) root->r=insert(root->r,k);
    return root;
}
Node* minNode(Node* root){
    while(root && root->l) root=root->l;
    return root;
}
Node* delNode(Node* root,int k){
    if(!root) return root;
    if(k<root->key) root->l=delNode(root->l,k);
    else if(k>root->key) root->r=delNode(root->r,k);
    else{
        if(!root->l){Node* t=root->r;free(root);return t;}
        else if(!root->r){Node* t=root->l;free(root);return t;}
        Node* t=minNode(root->r);
        root->key=t->key;
        root->r=delNode(root->r,t->key);
    }
    return root;
}
void inorder(Node* r){if(!r)return;inorder(r->l);printf("%d ",r->key);inorder(r->r);}
int main(){
    Node *root=NULL; int n,x; scanf("%d",&n);
    for(int i=0;i<n;i++){scanf("%d",&x); root=insert(root,x);}
    inorder(root); printf("\n");
    scanf("%d",&x); root=delNode(root,x);
    inorder(root);
    return 0;
}

