#include<stdio.h>

void main(){
    char a='A',b,c;
    for(int i=0;i<5;i++){
        b=a;
        for(int j=0;j<=i;j++){
            printf("%c ",b);
            b--;
        }
        a++;
        printf("\n");
    }

    for(int i=4;i>=1;i--){
        c=a-2;
        for(int j=i;j>=1;j--){
            printf("%c ",c);
            c--;
        }
        a--;
        printf("\n");
    }
}