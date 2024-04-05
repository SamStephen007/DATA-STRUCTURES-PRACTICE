#include<stdio.h>
#include<stdlib.h>
struct node{
    int vertex;
    struct node*link;
};
struct node* create(int n){
    struct node*newnode = (struct node*)malloc(sizeof(struct node));
    newnode->vertex = n;
    newnode->link  = NULL;
    return newnode;
}
    struct node**adjancy;
void init(int vertex){

    adjancy = malloc(vertex*(sizeof(struct node)));
    for(int i = 0;i<vertex;i++){
        adjancy[i] = NULL;
    }
}
void addedges(int src,int des){
   struct node*newnode = create(des);
   newnode->link = adjancy[src];
   adjancy[src] = newnode;
   newnode = create(src);
   newnode->link = adjancy[des];
   adjancy[des] = newnode;
}
void print(int vertex){
    for(int i=0;i<vertex;i++){
        struct node*temp = adjancy[i];
        printf("vertex:%d",i);
        while(temp){
            printf("->%d",temp->vertex);
            temp = temp->link;
        }
        printf("\n");
    }
}
int main(){
    init(5);
    addedges(0,2);
    addedges(3,3);
    addedges(1,3);
    print(5);
}