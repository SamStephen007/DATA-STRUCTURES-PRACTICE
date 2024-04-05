#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
};
struct node*newnode,*head,*end;
void create(int n){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = n;
    newnode->link = NULL;
    if(head==NULL){
        head=end=newnode;
    }else{
        end->link =  newnode;
        end = newnode;
        end->link = head;
    }
}
void display(){
    struct node*ptr = head;
    do{
        printf("%d %d\n",ptr->data,ptr->link);
        ptr  = ptr->link;
    }while(ptr!=NULL && ptr!=head);
}
int main(){
    int m,n;
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d",&n);
        create(n);
    }
    display();
}