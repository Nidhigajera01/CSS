// addition of 1-D array

#include<stdio.h>

void add(int a[],int b[],int x,int y){
    if(x>y){
        for(int i=0;i<y;i++){
            a[i]=a[i]+b[i];
        }
        for(int i=0;i<x;i++){
            printf("%d ",a[i]);
        }
    }
    else{
        for(int i=0;i<x;i++){
            b[i]=b[i]+a[i];
        }
        for(int i=0;i<y;i++){
            printf("%d ",b[i]);
        }
    }
}

void main(){
    int n1,n2;
    printf("Enter size of 1st array : ");
    scanf("%d",&n1);
    int A1[n1];
    printf("Enter element of 1st array: \n");
    for(int i=0;i<n1;i++){
        scanf("%d",&A1[i]);
    }
    printf("Enter size of 2nd array : ");
    scanf("%d",&n2);
    int A2[n2];
    printf("Enter element of 2nd array: \n");
    for(int i=0;i<n2;i++){
        scanf("%d",&A2[i]);
    }
    printf("Addition of 2 array:\n");
    add(A1,A2,n1,n2);
}

