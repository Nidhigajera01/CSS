//  odd even
#include<stdio.h>
void main(){
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int A[n];
    printf("Elements : \n");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int odd[50],even[50],j=0,k=0;
    for(int i=0;i<n;i++){
        if(A[i]%2==0){ 
            even[j]=A[i];
            j++;
        }
        else{
            odd[k]=A[i];
            k++;
        }
    }
    printf("ODD VALUE:");
    for(int i=0;i<k;i++){
        printf("\n%d",odd[i]);
    }
    printf("\nEVEN VALUE:");
    for(int i=0;i<j;i++){
        printf("\n%d",even[i]);
    }
}