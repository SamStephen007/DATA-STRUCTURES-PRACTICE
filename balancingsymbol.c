#include<stdio.h>
#include<string.h>
#define size 10
int stack[size],top = -1;
void push(char a ){
    if(top == size-1){
        printf("Stack is overflow");
    }else{
        top = top + 1;
        stack[top] = a;
    }
}
char pop(){
    if(top == -1){
        printf("Stack is underflow");
    }else{
        return stack[top--];
    }
}
int match(char a ,char b){
    if(a == '('&& b == ')'||a=='['&& b==']'||a=='{'&& b == '}'){
        return 1;
    }
    return 0;
}
char check(char exp[]){
    for(int i=0;i<strlen(exp);i++){
        if(exp[i]=='('||exp[i]=='{'||exp[i] == '['){
            push(exp[i]);
        }
        if(exp[i]==')'||exp[i]=='}'||exp[i] == ']'){
            if(top == -1){
                printf("Right paranthesis>left parenthesis");
                return 0;
            }else{
                char temp = pop();
                if(!match(temp,exp[i])){
                    printf("Mismatch paranthesis\n");
                    return 0;
                }
            }
        }
    }
    if(top == -1){
        printf("left parenthesis>right parenthesis\n");
        return 1;
    }
    return 0;
}
int main(){
    int valid;
    char exp[size];
    gets(exp);
    valid = check(exp);
    if(valid == 1){
        printf("Expression balanced");
    }else{
        printf("Expression not balanced");
    }
}