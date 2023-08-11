// count element

#include<stdio.h>
void main(){
    int n,a,b=0;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int A[n];
    printf("Elements : \n");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf("enter element :");
    scanf("%d",&a);
    for(int i=0;i<n;i++){
        if(A[i]==a){
            b++;
        }
    }
    printf("count : %d",b);
}