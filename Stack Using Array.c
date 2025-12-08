#include <stdio.h>
#define MAX 100
int stack[MAX], top=-1;
void push(int x){ if(top<MAX-1) stack[++top]=x; }
int pop(){ if(top>=0) return stack[top--]; return -1; }
int main(){
    push(10); push(20); push(30);
    printf("%d\n",pop());
    printf("%d\n",pop());
    return 0;
}

