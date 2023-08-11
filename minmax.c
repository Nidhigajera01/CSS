#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,c,temp;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);
        // if(a>b && a>c){
        //         printf("a is max.");
        // }
        // else if(b>c){
        //         printf("b is max.");
        // }    
        // else{
        //         printf("c is max.");
        // }

    temp = a>b ? (a>c ? a : c) : (b>c ? b : c);
    printf("%d is max.", temp);
    getch();
}