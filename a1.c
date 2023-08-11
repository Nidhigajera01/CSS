#include <stdio.h>
#include <conio.h>
void main()
{
    //     float R, D;
    //     printf("Enter rupees:");
    //     scanf("%f", &R);
    //     D = R / 82.85;
    //     printf("Dollar value: %f", D);
    //     printf("\n----------------------------------------");
    //     float dlr, rup;
    //     printf("\nEnter Dollar:");
    //     scanf("%f", &dlr);
    //     rup = dlr * 82.85;
    //     printf("Rupees value: %f", rup);

    int a = 1;
abc:

    printf("\nEnter number :");
    scanf("%d", &a);
    switch (a)
    {

    case 1:
    {
        int i=0;
        ab:
        if(i<10){
        
        printf("\n%d",i+1);
        i++;
        goto ab;
        }
        break;
    }

    default:
    {
        printf("Go back");

        goto abc;
    }
    }
}
