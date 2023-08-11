#include<stdio.h>
#include<conio.h>

void main(){
    int n,sum=0,temp;
    printf("Enter any num :");
    scanf("%d",&n);
    do
    {
        temp=n%10;
        sum+=temp;
        n=n/10;
    } while (n!=0);
    printf("Sum : %d",sum);
}