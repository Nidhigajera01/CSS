#include<stdio.h>

void factorial(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    printf("\nFactorial is %d",fact);
}
void main()
{
    int n1=1;
    while(n1<=10){
        int n;
        printf("\nEnter any num : ");
        scanf("%d",&n);
        factorial(n);
        n1++;
    }
}
