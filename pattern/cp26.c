#include<stdio.h>

void main(){
    char a='A',b;
    for(int i=1;i<=5;i++){
        for(int k=4;k>=i;k--){
            printf("  ");
        }
        a='A';
        for(int j=1;j<=i;j++){            
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
    for(int i=4;i>=1;i--){
        for(int k=4;k>=i;k--){
            printf("  ");
        }
        b='A';
        for(int j=1;j<=i;j++){
            printf("%c ",b);
            b++;
        }
        a++;
        printf("\n");
    }
}