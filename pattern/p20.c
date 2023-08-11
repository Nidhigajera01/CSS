#include<stdio.h>

void main(){
    for(int i=5;i>1;i--){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        for(int k=i;k<5;k++){
            printf("  ");
        }
        for(int k=0;k<5-i;k++){
            printf("  ");
        }
        for(int j=i;j>=1;j--){ 
            printf("%d ",j);
        }
        printf("\n");
    }
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        for(int k=i+1;k<=5;k++){
            printf("  ");
        }
        for(int k=4;k>=i;k--){
            printf("  ");
        }
        for(int j=i;j>=1;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
}