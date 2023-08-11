#include<stdio.h>

void main()
{
    char a='E',b;
    for(int i=5;i>=1;i--){
        b=a;
        for(int j=i;j>=1;j--){
            printf("%c ",b);
            b--;
        }
        a--;
        printf("\n");
    }
}