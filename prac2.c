#include<stdio.h>
#include<conio.h>

void main(){
    int n;
    printf("Enter any num : ");
    scanf("%d",&n);
    
    // if(n%3==0 && n%5==0){
    //     printf("%d is divided by both 3 and 5.",n);
    // }
    // else if (n%5==0)
    // {
    //     printf("%d is divided by 5.",n);
    // }
    // else if (n%3==0)
    // {
    //     printf("%d is divided by 3.",n);
    // }
    // else{
    //     printf("%d is not divided by 3 and 5.",n);
    // }

    int i=1;
    do
    {
        printf("%d",n);
        n--;
    } while (i<=n);
    
        
}