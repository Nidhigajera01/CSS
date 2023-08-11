#include<stdio.h>

void main(){
    int n,m;
    for(int i=1;i<=5;i++){
        n=i,m=4; 
        for(int j=1;j<=i;j++){      
            printf("%d ",n);
            n=n+m;
            m--;
        }
        printf("\n");
    }
}