#include<stdio.h>

void main()
{
    char a='A';
    for(int i=5;i>=1;i--){
        for(int j=i;j>=1;j--){
            printf("%c ",a);
        }
        a++;
        printf("\n");
    }
}