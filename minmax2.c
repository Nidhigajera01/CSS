#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c, d,temp;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    printf("Enter c:");
    scanf("%d", &c);
    printf("Enter d:");
    scanf("%d", &d);

    // if (a>b && a>c && a>d) {
    //     printf("a is max.");
    // }
    // else if(b>c && b>d) {
    //     printf("b is max.");
    // }
    // else if(c>d){
    //     printf("c is max.");
    // }
    // else{
    //     printf("d is max.");
    // }   

    temp=a>b?(a>c?(a>d?a:d):(c>d?c:d)):(b>c?(b>d?b:d):(c>d?c:d));
    printf("%d is max.",temp);
    getch();  
}