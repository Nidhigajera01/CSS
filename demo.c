#include<stdio.h>

void main(){
    int a=8,b=0;
    for(int i=0 ; i<10 ; i++){
        if(a == i){
            printf("ho");
            break;
        }
        else{
            printf("%d\n",b);
            b++;
        }
    }
}