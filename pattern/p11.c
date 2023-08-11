#include <stdio.h>
#include <conio.h>
void main()
{
    
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        for (int k = 4; k >= i; k--)
        {
            printf("  ");
        }
        for (int k = 4; k >= i; k--)
        {
            printf("  ");
        }
        for (int j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}