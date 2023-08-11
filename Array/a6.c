// replace element

#include<stdio.h>
void main(){
    int n,a,b;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int A[n];
    printf("Elements : \n");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }

    printf("Enter index : ");
    scanf("%d",&a);
    printf("Enter value : ");
    scanf("%d",&b);
    A[a]=b;
    
    for(int i=0;i<n;i++){
        printf("\n%d",A[i]);
    }
}