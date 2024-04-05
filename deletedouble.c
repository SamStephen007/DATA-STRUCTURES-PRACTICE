#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*prev;
    struct node*link;
};
struct node*head,*end,*newnode;
void create(int n){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->link = NULL;
    newnode->prev = NULL;
    newnode->data = n;
    if(head == NULL){
        head= end = newnode;
    }else{
        end ->link = newnode;
        newnode->prev = end;
        end = newnode;
    }
}
void deletefront(){
    struct node*temp = head;
    head = head->link;
    free(temp);
}
void deleteend(){
    struct node*temp = head,*temp2;
    while(temp->link!=NULL){
        temp2 = temp;
        temp = temp->link;
    }
    temp->prev = NULL;
    temp2->link = NULL;
    free(temp);
}
void deletemid(int pos){
    struct node*temp = head,*temp2;
    
    for(int i = 0;i<pos;i++){
        temp = temp->link;
    }
    temp->prev->link = temp->link;
    temp->link->prev = temp->prev;
    temp->prev = temp->link = NULL;
    free(temp);
}

void display(){
    struct node*ptr = head;
    while(ptr!=NULL){
        printf("%d\t%d\t%d\n",ptr->prev,ptr->data,ptr->link);
        ptr = ptr->link;
    }
}
int main(){
    int n,m;
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d",&n);
        create(n);
    }
    display();
    deletefront();
    display();
    deleteend();
    display();
    deletemid(1);
    display();
}