// Ascending & decending

#include <stdio.h>

int n;
void asc(int a[])
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
    }
    printf("Ascending order :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
void dec(int a[])
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
    }
    printf("\nDescending order :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int sec_min(int a1[],int x){
    int max=0;
    dec(a1);
    for (int i = 0; i < x; i++)
    {
        if (a1[0] > a1[i + 1])
        { 
            max = a1[i + 1];
            x = 0;
        }
    }
    printf("\n2nd maximum : %d", max);
}
void main()
{
    printf("\nEnter size of array : ");
    scanf("%d", &n);
    int A1[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A1[i]);
    }
    asc(A1);
    dec(A1);
    sec_min(A1,n);
}