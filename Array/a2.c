// 2nd maximum
#include <stdio.h>

void main()
{
    int n, temp, a1, a2;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter ele :\n");
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] < a[i + 1])
            {
                temp = a[i + 1];
                a[i + 1] = a[i];
                a[i] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("\n%d", a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[0] > a[i + 1])
        {
            a1 = a[i + 1];
            n = 0;
        }
    }
    printf("\n2nd maximum : %d", a1);

}
