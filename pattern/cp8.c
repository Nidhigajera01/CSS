#include<stdio.h>

void main()
{
    char a;
    for(int i=1;i<=5;i++){
        a='E';
        for(int j=1;j<=i;j++){
            printf("%c ",a);
            a--;
        }
        printf("\n");
    }
}