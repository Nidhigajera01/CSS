#include<stdio.h>

void main(){
    for(int i=1;i<=5;i++){
        for(int k=4;k>=i;k--){
            printf("  ");
        }
        for(int j=i;j>=1;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    for(int i=4;i>=1;i--){
        for(int k=1;k<=5-i;k++){
            printf("  ");
        }
        for(int j=i;j>=1;j--){ 
            printf("%d ",j);
        }
        printf("\n");
    }
}