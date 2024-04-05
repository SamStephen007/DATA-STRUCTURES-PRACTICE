#include<stdio.h>
int binary(int arr[],int left,int right,int x){
    while(left<=right){
        int mid = (left+right)/2;
        if(arr[mid] == x){
            return mid;
        }
        else if(arr[mid]>x){
            right = mid-1;
        }
        else{
            left = mid +1;
        }
    }
    return -1;
}
int linear(int arr[],int x,int len){
    for(int i = 0;i<len;i++){
        if(arr[i] == x){
            return i;
        }
        
    }
    return -1;
}
int main(){
    int arr[] = {1,3,5,7,9,11,34};
    int n = sizeof arr/sizeof arr[0];
    int m,s;
    scanf("%d",&m);
    int result = binary(arr,0,n-1,m);
    if(result != -1){
        printf("Element found the index %d\n",result);
    }else{
        printf("Element not found\n");
    }
    scanf("%d",&s);
    int ans = linear(arr,s,n);
    if(ans!=-1){
        printf("Element found at the index %d",ans);
    }else{
       printf("Elemnt not found");
         
    }
}