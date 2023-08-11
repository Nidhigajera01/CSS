#include<stdio.h>

void main()
{
    char a;
    for(int i=1;i<=5;i++){
        for(int k=5;k>i;k--){
            printf("  ");
        }
        a='A';
        for(int j=1;j<=i;j++){
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
}