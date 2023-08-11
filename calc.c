#include <stdio.h>

void main()
{
    int a, b, add, sub, multi, mod;
    float div;
    char n;
    printf("Enter any two number : \n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("\nOperation : ");
    scanf(" %c", &n);
    switch (n)
    {
        case '+':
        {
            add = a + b;
            printf("addition : %d", add);
            break;
        }
        case '-':
        {
            sub = a - b;
            printf("subtraction : %d", sub);
            break;
        }
        case '*':
        {
            multi = a * b;
            printf("multiplication : %d", multi);
            break;
        }
        case '/':
        {
            div = a / b;
            printf("division : %d", div);
            break;
        }
        case '%':
        {
            mod = a % b;
            printf("modulo : %d", mod);
            break;
        }
        default:
        {
            break;
        }
    }
}