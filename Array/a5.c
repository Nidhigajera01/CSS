// delete value

#include<stdio.h>

void main(){
    int n,a;
    printf("Enter size of array :");
    scanf("%d",&n);
    int A[n];
    printf("elements :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf("Enter index no to delete :");
    scanf("%d",&a);
    for(int j=a;j<n-1;j++){
        A[j]=A[j+1];
    }
    n--;
    for(int i=0;i<n;i++){
        printf("\n%d",A[i]);
    }
}