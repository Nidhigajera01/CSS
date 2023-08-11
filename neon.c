#include <stdio.h>
#include <conio.h>

void main()
{
    int n=1, num, sum, temp;
    // printf("Enter any number :");
    // scanf("%d", &n);
    do
    {
        sum = 0;
        num = n * n;
        do
        {
            temp = num % 10;
            sum += temp;
            num = num / 10;
        }while (num != 0);
        if (sum == n)
        {
            printf("\n%d",n);
        }
        // else
        // {
        //     printf("It is not neon number.");
        // }
        n++;
    }while (n < 1000);
}