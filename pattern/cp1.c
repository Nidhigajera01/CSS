#include<stdio.h>

void main()
{
    char a;
    for(int i=0;i<5;i++){
        a='A';
        for(int j=0;j<=i;j++){
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
}