#include<stdio.h>

void main(){
    for(int i=1;i<=5;i++){ 
        for(int j=i;j>=1;j--){
            if(j>=i || i==5){
                printf("%d ",j);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
