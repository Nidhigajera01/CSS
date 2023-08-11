#include<stdio.h>

void main()
{
    char a;
    for(int i=5;i>=1;i--){
        for(int k=1;k<=5-i;k++){
            printf("  ");
        }
        a='E';
        for(int j=i;j>=1;j--){
            printf("%c ",a);
            a--;
        }
        printf("\n");
    }
}