#include<stdio.h>
#include<conio.h>
void main(){
    int n,i,fact;
    printf("Enter any num :");
    scanf("%d",&n);
    i=1;
    fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("factorial is %d",fact);
}

// do
//     {      
//         fact=fact*i;
//         i++;    
//     }while (i<=n);