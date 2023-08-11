#include <stdio.h>
#include <conio.h>

void main()
{
    int n,sum, multi, temp;
    printf("Spy numbers :");
    for(int i=10;i<=1000;i++){
        sum=0,multi=1;
        for(n=i;n!=0;){
            temp=n%10;
            sum+=temp;
            multi*=temp;
            n=n/10;
        }
        if(sum==multi){
            printf("\n%d",i);
        }
    }
    
}

// do
//     {
//         num = n;
//         sum=0,multi=1;
//         do
//         {
//             temp = num % 10;
//             sum = sum + temp;
//             multi = multi * temp;
//             num = num / 10;
//         }while (num != 0);
//         if (sum == multi)
//         {
//             printf("\n%d", n);
//         }
//         n++;
//     }
//     while (n < 1000);