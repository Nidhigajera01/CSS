// additon of 2 array

#include <stdio.h>

void main()
{
    int n;
    printf("Enter size of 1st array : ");
    scanf("%d", &n);
    int a[n][n], b[n][n];

    printf("Elements of 1st array : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Elements of 2nd array : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    int c[n][n];
    printf("sum of arrays\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", c[i][j] = a[i][j] + b[i][j]);
        }
        printf("\n");
    }
}