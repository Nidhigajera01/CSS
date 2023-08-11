#include<stdio.h>

struct mystruct {
    int s,s1,s2,m,m1,m2,h;

}A;

void main() {
    printf("enter hour :");
    scanf("%d",&A.h);
    printf("enter minute :");
    scanf("%d",&A.m);
    printf("enter second :");
    scanf("%d",&A.s);  

    if (A.s>=60){
        A.s1=A.s%60;
        A.s2=A.s/60;
    }
    else{
        A.s1=A.s;
    }
    A.m+=A.s2;

    if (A.m>=60){
        A.m1=A.m%60;
        A.m2=A.m/60;
    }
    else{
        A.m1=A.m;
    }
    A.h+=A.m2;
    
    printf("\n%d.%d.%d",A.h,A.m1,A.s1);
}