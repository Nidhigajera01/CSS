// Multiplication table

#include<stdio.h>

int table(int a){
    int i=1;
    while (i<=10)
    {
        printf("\n%d %d %d",a,i,a*i);
        i++;
    }
    
}

void main(){
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    table(n);
}