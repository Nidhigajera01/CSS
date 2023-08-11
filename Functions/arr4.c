// count element

#include<stdio.h>

int count(int a[],int x){
    int A,cnt=0;
    printf("Enter element you want to count :");
    scanf("%d",&A);
    for(int i=0;i<x;i++){
        if(a[i]==A){
            cnt++;
        }
    }
    return cnt;
}

void main(){
    int n,a;
    printf("Enter size of array:");
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    
    a=count(A,n);
    printf("element count : %d",a);
}