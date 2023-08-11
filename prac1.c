#include <stdio.h>
#include <conio.h>

void main()
{
    // float P,R,N;
    // printf("Enter Amount :");
    // scanf("%f",&P);
    // printf("Enter Interest rate :");
    // scanf("%f",&R);
    // printf("Enter Time(Year) :");
    // scanf("%f",&N);
    // float I=(P*R*N)/100;
    // printf("Simple Interest : %f",I);

    int n;
    printf("Enter any no : ");
    scanf("%d", &n);

// print 1 t0 n.
    /*int i=1;

    do
    {
        printf("\n%d",i);
        i++;
    } while (i<=n);*/

    // print reverse of num
    
    int temp, a = 0;

    do
    {
        temp = n % 10;
        a = a * 10 + temp;
        n = n / 10;
    } while (n != 0);
    printf("%d", a);
}