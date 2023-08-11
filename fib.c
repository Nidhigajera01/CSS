#include<stdio.h>

void main(){
    int i=0,n,fib=0,a=0,b=1;
    printf("Enter any number :");
    scanf("%d",&n);
    printf("0\n1");
    for (i = 0; i < n-1; i++)
    {
        fib=a+b;
        a=b;
        b=fib;
        printf("\n%d",fib);
    }
}
    
    
// do
//     {        
//         fib=a+b;
//         a=b;
//         b=fib;
//         printf("\n%d",fib);
//         i++;
//     } while (i<n);