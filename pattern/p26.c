#include<stdio.h>

void main(){
    for(int i=5;i>=1;i--){
        for(int k=1;k<i;k++){
            printf("  ");
        }
        for(int j=5;j>=i;j--){ 
            printf("%d ",i);
        }
        printf("\n");
    }
}