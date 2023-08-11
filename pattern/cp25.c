#include<stdio.h>

void main()
{
    char a,b;
    for(int i=5;i>=1;i--){
        a='A';
        for(int j=i;j>=1;j--){
            printf("%c ",a);
            a++;
            b=a-1;
        }
        for(int k=i;k<5;k++){
            printf("  ");
        }
        for(int k=0;k<5-i;k++){
            printf("  ");
        }
        for(int j=i;j>=1;j--){
            printf("%c ",b);
            b--;
        }
        printf("\n");
    }
    for(int i=2;i<=5;i++){
        a='A';
        for(int j=1;j<=i;j++){
            printf("%c ",a);
            a++;
        }
        for (int k=5-i; k>=1; k--)
        {
            printf("  ");
        }
        for(int k= 5-i;k>=1;k--){
            printf("  ");
        }
        b=a-1;
        for(int j=1;j<=i;j++){
            printf("%c ",b);
            b--;
        }
        printf("\n");
    }
}