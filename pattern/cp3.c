#include<stdio.h>

void main()
{
    char a='E';
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            printf("%c ",a);
        }
        a--;
        printf("\n");
    }
}