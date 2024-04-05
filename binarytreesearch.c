#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*left;
    struct node*right;
};
struct node*newnode,*root;
struct node* create(int n){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = n;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
struct node*insert(struct node*root,int n){
    if(root == NULL){
        return create(n);
    }else{
        if(root->data>n){
            root->left = insert(root->left,n);
        }
        else if(root->data<n){
            root->right = insert(root->right,n);
        }
    return root;
}
}
void inorder(struct node*root){
    if(root == NULL){
        return;
    }else{
        inorder(root->left);
        printf("%d",root->data);
        inorder(root->right);
    }
}
int main(){
    int n,m;
    scanf("%d",&m);
    root = NULL;
    root = insert(root,12);
    for(int i=0;i<m;i++){
        scanf("%d",&n);
        insert(root,n);
    }
    inorder(root);

}