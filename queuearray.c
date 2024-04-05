#include<stdio.h>
#define max 10
int queue[max];
int rear = -1;
int front = -1;
void enqueue(int n){
    if(front == -1 && rear ==-1){
        front = 0;
        rear = 0;
        queue[rear] = n;
    }
    else if((rear + 1)%max == front){
        printf("Queue is overflow");
    }else{
        rear = (rear +1)%max;
        queue[rear] = n;
    }
}
void dequeue(){
    if(front == rear == -1){
        printf("Queue is underflow");
    }
    else if(front == rear){
        printf("\nThe dequeue element is %d\n",queue[front]);
        front = rear = -1;
    }else{
        printf("\nThe dequeue element is%d\n",queue[front]);
        front = (front + 1)%max;
    }
}
void display(){
    int i = front;
    if(front == rear == -1){
        printf("Queue is empty");
    }else{
    while(i!=rear){
        printf("%d\t",queue[i]);
        i = (i + 1)%max;
    }
    printf("%d",queue[i]);
}
}
int main(){
    enqueue(34);
    enqueue(1);
    enqueue(87);
    enqueue(23);
    enqueue(54);
    display();
    dequeue();
    display();
}
