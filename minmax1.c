#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b,temp;
    printf("Enter value of a:");
    scanf("%d", &a);
    printf("Enter value of b:");
    scanf("%d", &b);
    // if (a > b)
    // {
    //     printf("%d is max.", a);
    // }
    // else
    // {
    //     printf("%d is max.", b);
    // }
    temp=a>b?a:b;
    printf("%d is max.",temp);
    getch();
}