// addition of 2 1-D array

#include <stdio.h>
void main()
{
    int n1, n2, n3;
    printf("Enter size of 1st array:");
    scanf("%d", &n1);
    int a1[n1];
    printf("Elements of 1st array :\n");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &a1[i]);
    }
    printf("Enter size of 2nd array:");
    scanf("%d", &n2);
    int a2[n2];
    printf("Elements of 1st array :\n");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &a2[i]);
    }

    if (n1 > n2)
    {
        for (int i = 0; i < n2; i++)
        {
            a1[i] = a1[i] + a2[i];
        }
        printf("\n");
        for (int i = 0; i < n1; i++)
        {
            printf("%d ", a1[i]);
        }
    }
    else
    {
        for (int i = 0; i < n1; i++)
        {
            a2[i] = a2[i] + a1[i];
        }
        printf("\n");
        for (int i = 0; i < n2; i++)
        {
            printf("%d ", a2[i]);
        }
    }
    
}