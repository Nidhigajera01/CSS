// odd even seperate

#include<stdio.h>
void even_odd(int A[],int a){
    int ODD[50],EVEN[50],x=0,y=0;
    for(int i=0;i<a;i++){
        if(A[i]%2==0){
            EVEN[x]=A[i];
            x++;
        }
        else{
            ODD[y]=A[i];
            y++;
        }
    }
    printf("\nEven num: ");
    for(int i=0;i<x;i++){
        printf("%d ",EVEN[i]);
    }

    printf("\nodd num: ");
    for(int i=0;i<y;i++){
        printf("%d ",ODD[i]);
    }
}

void main(){
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("enter element:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    even_odd(a,n);
}