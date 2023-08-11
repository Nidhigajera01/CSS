#include<stdio.h>

void main(){
    for(int i=0;i<=5;i++){
        for(int k=4;k>=i;k--){
            printf("  ");
        }
        printf("* ");
        for(int j=1;j<i+1;j++){
            printf("A * ");
        }
        printf("\n");
    }
}