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
    if(head == NULL){
        head = newnode;
        end = newnode;
    }else{
        end->link = newnode;
        end = newnode;
    }
}
void display(){
    struct node*ptr = head;
    while(ptr!=NULL){
        printf("%d\t%d\n",ptr->data,ptr->link);
        ptr = ptr->link;
    }
}
void insertfront(int n){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->link = NULL;
    newnode->data = n;
    newnode->link = head;
    head = newnode;
}
void insertend(int n){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = n;
    newnode->link = NULL;
    end->link = newnode;
    end = newnode;
}
void insertmiddle(int pos,int n){
    struct node*temp = head,temp2;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = n;
    newnode->link = NULL;
    for(int i=0;i<pos;i++){
        temp = temp->link;
    }
    newnode->link = temp->link;
    temp->link = newnode;
}
void deletemid(int pos){
    struct node*temp,*temp2;
    for(int i=0;i<pos;i++){
        temp2 = temp;
        temp = temp->link;
    }
    temp2->link = temp->link;
    free(temp);
}
int main(){
    int n ,m;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&m);
        create(m);
    }
    display();
    insertfront(47);
    insertend(50);
    insertmiddle(2,7);
    display();
    deletemid(3);
    display;
}