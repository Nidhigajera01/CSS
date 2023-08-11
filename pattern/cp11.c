#include<stdio.h>

void main()
{
    char a='E',b;
    for(int i=1;i<=5;i++){
        b=a;
        for(int j=1;j<=i;j++){
            printf("%c ",b);
            b++;
        }
        a--;
        printf("\n");
    }
}