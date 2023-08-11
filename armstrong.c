#include <stdio.h>
#include <conio.h>

void main()
{
    int n, temp, sum ;
    printf("Armstrong numbers:");
    for(int i=10 ;i<=1000 ;i++){
        sum=0;
        for (n=i;n!=0;)
        {
            temp=n%10;
            sum+=(temp*temp*temp);
            n=n/10;
        }
        if(sum==i){
            printf("\n%d",i);
        }
    }
}
    // do
    // {
    //     num = n;
    //     sum=0;
    //     do
    //     {
    //         temp = num % 10;
    //         sum = sum + (temp * temp * temp);
    //         num = num / 10;
    //     }while (num != 0);
    //     if (sum == n)
    //     {
    //         printf("\n%d is armstrong number.", n);
    //     }
    //    n++; 
    // } while(n<1000);