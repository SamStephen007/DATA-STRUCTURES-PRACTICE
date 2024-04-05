#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*left,*right;
};
struct node*newnode,*root;
int append(int n){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = n;
    newnode->left = NULL;
    newnode->right = NULL;
    if(root == NULL){
        root = newnode;
    }else{
        struct node*temp = root,*temp1= temp;
        int flag = 0;
        while(1){
        if(temp->left == NULL){
            temp->left = newnode;
            break;
        }
        else if(temp->right == NULL){
            temp->right = newnode;
            break;
        }
        else if(flag == 0){
            temp = temp->left;
            flag = 1;
        }
        else{
            temp = temp1->right;
            flag = 0;
            temp1 = temp1->left;
        }
    }
    }
}
void inorder(struct node*temp){
    if(temp!=NULL){
        inorder(temp->left);
        printf("%d ",temp->data);
        inorder(temp->right);
    }
}
int main(){
    int n,m;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&m);
        append(m);
    }
    inorder(root);
}