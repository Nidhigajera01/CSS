#include <stdio.h>

void main()
{
    char a='A',b,c;
    for (int i = 1; i <= 5; i++)
    {
        c = 'A';
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", c);
            c++;
        }

        for (int k = 5 - i; k >= 1; k--)
        {
            printf("  ");
        }
        for(int k= 5-i;k>=1;k--){
            printf("  ");
        }
        b=a;
        for(int j=1;j<=i;j++){
            printf("%c ",b);
            b--;
        }
        a++;
    printf("\n");
    }
}