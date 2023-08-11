#include<stdio.h>
#include<conio.h>

void main(){
    int a,b,c,d,e,temp1,temp2;
    wertwert :
    printf("Enter a :");
    scanf("%d",&a);
    
/*    printf("Enter b :");
    scanf("%d",&b);
    printf("Enter c :");
    scanf("%d",&c);
    printf("Enter d :");
    scanf("%d",&d);
    printf("Enter e :");
    scanf("%d",&e);

    temp1=(a>b && a>c && a>d && a>e)?a:(b>c && b>d && b>e)?b:(c>d && c>e)?c:(d>e)?d:e;
    printf("%d is max",temp1);

    temp2=(a<b && a<c && a<d && a<e)?a:(b<c && b<d && b<e)?b:(c<d && c<e)?c:(d<e)?d:e;
    printf("\n%d is min",temp2);*/
    switch(a)
    {
            case 1:
            {
                printf("wellcome");
                break;
            }
            default :
            {
                printf("go back");
    
                goto wertwert ;
            }

    }
}