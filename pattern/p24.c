#include<stdio.h>

void main(){
    for (int i = 5; i >= 1; i--)
    {
        for(int k=1;k<=i-1;k++){
            printf("  ");
        }
        for(int j=5;j>=i;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
}