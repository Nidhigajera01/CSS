#include<stdio.h>
#include<conio.h>
void main(){
    
    int m,n,i=1;
    printf("Enter any num : ");
    scanf("%d",&n);
    
    do{
        m=n*i;
        printf("\n%d * %d = %d",n,i,m);
        i++;
    }while(i<=10);

    // int r,l,L,B;
    // float pi=3.14,h,v;
    // printf("Enter value of r : ");
    // scanf("%d",&r);
    // printf("Enter value of l : ");
    // scanf("%d",&l);
    // printf("Enter value of L : ");
    // scanf("%d",&L);
    // printf("Enter value of B : ");
    // scanf("%d",&B);
    
    // printf("\nArea of circle is %f",pi*(r*r));
    // printf("\nPerimeter of circle is %f",(2*pi*r));
    // printf("\n----------------------------------------");
    // h=l*l;
    // printf("\nArea of square is %f",h);
    // printf("\n----------------------------------------");
    // v=L*B;
    // printf("\nArea of Rectangle is %f",v);

    // for(i=1;i<=10;i++){
    //     printf("\n%d * %d = %d",n,i,n*i);
    // }
}