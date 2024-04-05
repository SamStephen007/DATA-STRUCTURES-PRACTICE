#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
};
struct node*newnode,*head,*end;
void push(int n){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = n;
    newnode->link = NULL;
    if(head == NULL){
        head = end = newnode;
    }else{
        newnode->link = head;
        head = newnode;
    }
}
void pop(){
    if(head == NULL){
        printf("Stack is empty");
    }else{
        struct node*temp = head;
        head = head->link;
        free(temp);
    }
}
void peek(){
    if(head == NULL){
        printf("Stack is empty");
    }else{
    printf("%d\t%d",head->data,head->link);
}
}
void display(){
    struct node*ptr = head;
    while(ptr!=NULL){
        printf("%d\t%d\n",ptr->data,ptr->link);
        ptr = ptr->link;
    }
}
int main(){
    int n,m;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&m);
        push(m);
    }
    display();
    pop();
    peek();
    printf("display\n");
    display();
}