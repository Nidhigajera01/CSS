#include<stdio.h>

void main()
{
    char a='A',b;
    for(int i=0;i<5;i++){
        b=a;
        for(int j=0;j<=i;j++){
            printf("%c ",b);
            b--;
        }
        a++;
        printf("\n");
    }
}