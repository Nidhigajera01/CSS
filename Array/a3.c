// duplicate remove
#include<stdio.h>

void main(){
    int i,j,n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Elements :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                for(int k=j;k<n-1;k++){
                    a[k]=a[k+1];
                }
                n--;
            }
        }
    }
    printf("----------------------------\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\nsize :%d",n);
}