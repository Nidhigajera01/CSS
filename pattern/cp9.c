#include<stdio.h>

void main()
{
    char a;
    for(int i=5;i>=1;i--){
        a='A';
        for(int j=5;j>=i;j--){
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
}