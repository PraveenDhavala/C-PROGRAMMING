#include <stdio.h>
char stack[200]; int top=-1;
void push(char c){stack[++top]=c;}
char pop(){return stack[top--];}
int main(){
    char s[200]; int i; int ok=1;
    gets(s);
    for(i=0;s[i];i++){
        char c=s[i];
        if(c=='('||c=='{'||c=='[') push(c);
        else if(c==')'||c=='}'||c==']'){
            if(top==-1){ok=0;break;}
            char t=pop();
            if((c==')'&&t!='(')||(c=='}'&&t!='{')||(c==']'&&t!='[')){ok=0;break;}
        }
    }
    if(top!=-1) ok=0;
    printf(ok?"Balanced\n":"Not Balanced\n");
    return 0;
}

