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
        head = end = NULL;
    }else{
        end->link = newnode;
        end = newnode;
        end->link = head;
    }
}
void display(){
    struct node*ptr = head;
    do{
        printf("%d\t%d\n",ptr->data,ptr->link);
        ptr = ptr->link;
    }while(ptr!=NULL && ptr!=head);
}
void frontdelete(){
    struct node*temp;
    temp = head;
    head = head->link;
    free(temp);
}
void enddelete(){
    struct node*temp,temp2;
    while(temp!=NULL){
        temp = temp->link;
    }
    temp->link = end->link;
    free(end);
    end = temp;
}
void middelete(){
    struct node*
}