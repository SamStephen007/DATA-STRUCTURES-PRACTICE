#include<stdio.h>
#define v 4
void init(int adj[v][v]){
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            adj[i][j] = 0;
        }
    }
}
void matrix(int adj[v][v],int i,int j){
    adj[i][j] = 1;
    adj[j][i] = 1;
}
void print(int adj[v][v]){
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            printf("%d",adj[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int mat[v][v];
    init(mat);
    matrix(mat,0,2);
    matrix(mat,2,2);
    matrix(mat,1,2);
    matrix(mat,0,0);
    matrix(mat,3,1);
    matrix(mat,3,3);
    print(mat);
}