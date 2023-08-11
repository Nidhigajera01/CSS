#include<stdio.h>

void main()
{
    char a='E',b;
    for(int i=5;i>=1;i--){
        for(int k=1;k<=5-i;k++){
            printf("  ");
        }
        b=a;
        for(int j=i;j>=1;j--){
            printf("%c ",b);
            b--;
        }
        a--;
        printf("\n");
    }
}