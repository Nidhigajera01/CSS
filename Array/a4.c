// add value
#include<stdio.h>

void main(){
    int n,a,b;
    printf("Enter size of array :");
    scanf("%d",&n);
    printf("elements:\n");
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }

    printf("Enter index no:");
    scanf("%d",&a);
    printf("Enter value:");
    scanf("%d",&b);
    n++;
    for(int i=n-1;i>=a;i--){
        A[i+1]=A[i];
    }
    A[a]=b;

    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
}