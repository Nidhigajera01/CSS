#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,c,d,e,temp;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    printf("Enter c:");
    scanf("%d", &c);
    printf("Enter d:");
    scanf("%d", &d);
    printf("Enter e:");
    scanf("%d", &e);

    // if (a>b && a>c && a>d && a>e) {
    //     printf("a is max.");
    // }
    // else if(b>c && b>d && b>e){
    //     printf("b is max.");
    // }
    // else if(c>d && c>e){
    //     printf("c is max.");
    // }
    // else if(d>e){
    //     printf("d is max.");
    // }
    // else{
    //     printf("e is max.");
    // }

    temp=a>b?(a>c?(a>d?(a>e?a:e):(d>e?d:e)):(c>d?(c>e?c:e):(d>e?d:e))):(b>c?(b>d?(b>e?b:e):(d>e?d:e)):(c>d?(c>e?c:e):(d>e?d:e)));
    printf("%d is max.",temp);
    getch();
}