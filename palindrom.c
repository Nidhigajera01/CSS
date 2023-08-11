#include<stdio.h>
#include<conio.h>

void main(){
    int temp,rvs,num;
    printf("Palindrome numbers:");
    for (int i = 10; i <= 1000; i++)
    {
        rvs=0;
        for(num=i;num!=0;)        
        {
            temp=num%10;
            rvs=rvs*10+temp;
            num=num/10;
        }
        if (i==rvs)
        {
            printf("\n%d",i);
        }
             
    }
}   



    // printf("Enter any num :");
    // scanf("%d",&n);
    // int num=n;
    // do
    // {
    //     temp=num%10;
    //     rvs=rvs*10+temp;
    //     num=num/10;
    // }while (num!=0);

    // if(n==rvs){
    //     printf("%d is palindrome..",n);
    // }
    // else{
    //     printf("%d is not palindrome..",n);
    // }

