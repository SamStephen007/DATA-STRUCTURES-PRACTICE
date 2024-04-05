/*#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
    struct node*prev;
};
struct node*head,*end,*newnode;
void create(int n){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->link = NULL;
    newnode->prev = NULL;
    newnode->data = n;
    if(head == NULL){
        head = end = newnode;
    }else{
        end->link = newnode;
        newnode->prev = end;
        end = newnode;
    }
}
void frontinsert(int n){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->prev = NULL;
    newnode->data = n;
    newnode->link = NULL;
    newnode->link = head;
    head->prev = newnode;
    head = newnode;
}
void insertend(int n){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->prev = NULL;
    newnode->link = NULL;
    newnode->data = n;
    end->link = newnode;
    newnode->prev = end;
    end = newnode;
}
void insertmiddle(int n,int pos){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->prev = NULL;
    newnode->data = n;
    newnode->link = NULL;
    struct node*temp = head,*temp2;
    for(int i=0;i<pos-1;i++){
        temp = temp->link;
        break;
    }
    temp2 = temp->link;
    temp->link = newnode;
    temp2->prev = newnode;
    newnode->link = temp2;
    newnode->prev = temp;
}
void display(){
    struct node*ptr = head;
    while(ptr!=NULL){
        printf("%d\t%d\t%d\n",ptr->prev,ptr->data,ptr->link);
        ptr = ptr->link;
    }
}
int main(){
    int n,m,t;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&m);
        create(m);
    }
    display();
    //scanf("%d",&t);
    frontinsert(12);
    display();
    insertend(10);
    display();
    insertmiddle(7,4);
    display();
}*/
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
    struct node*prev;
};
struct node*head,*end,*newnode;
void create(int n){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->prev = NULL;
    newnode->data = n;
    newnode->link = NULL;
    newnode->prev = NULL;
    if(head == NULL){
        head =end = newnode;
    }else{
        end ->link = newnode;
        newnode->prev = end;
        end = newnode;
    }
}
void frontinsert(int n){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->prev = NULL;
    newnode->data = n;
    newnode->link = NULL;
    head->prev = newnode;
    newnode->link = head;
    head = newnode;
}
void endinsert(int n){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->prev = NULL;
    newnode->data = n;
    newnode->link = NULL;
    end->link = newnode;
    newnode->prev = end;
    end = newnode;
}
void middleinsert(int n,int pos){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->prev = NULL;
    newnode->data = n;
    newnode->link = NULL;
    struct node*temp,*temp2;
    for(int i=0;i<pos-1;i++){
        temp = temp->link;
    }
    temp2 = temp->link;
    newnode->link = temp2;
    newnode->prev = temp;
    temp->link = newnode;
    temp2->prev = newnode;
}
void display(){
    struct node*ptr = head;
    while(ptr!=NULL){
        printf("%d\t%d\t%d\n",ptr->prev,ptr->data,ptr->link);
        ptr = ptr->link;
    }
}
int main(){
    int m,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&m);
        create(m);
    }
    display();
    frontinsert(7);
    display();
    endinsert(8);
    display();
    middleinsert(9,4);
    display();
}