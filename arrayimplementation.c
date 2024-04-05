#include<stdio.h>
#define size 10
int arr[size],n;
void create(){
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void display(){
    for(int i =0 ;i<n;i++){
        printf("%d\t",arr[i]);
    }
}
void delete(){
    int del;
    int temp = n;
    printf("Enter the index to delete:\n");
    scanf("%d",&del);
    for(int i =del;i<n;i++){
        arr[i] = arr[i+1];
    }
    n--;
}
void insert(int pos,int data){
    for(int i=n-1;i>=pos;i--){
        arr[i+1] = i;
    }
    arr[pos] = data;
    n = n+1;
}
void  search(int arr[],int x){
    int result = -1;
    for(int i = 0;i<n;i++){
        if(arr[i] == x){
            result = i;
            break;
        }
    }
    if(result == -1){
        printf("Element not found\n");
    }else{
        printf("Element found at the index %d\n",result);
    }

}
int main(){
    create();
    display();
    search(arr,7);
    insert(3,9);
    display();
    delete();
    display();
}
