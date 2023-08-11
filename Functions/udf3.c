// string function

#include<stdio.h>

int len(char stg[]){
    int cnt=0;
    for(int i=0;stg[i]!=NULL;i++){
        cnt++;
    }
    return cnt;
} 

char cap(char stg[]){
    for(int i=0;stg[i]!=NULL;i++){
        if(stg[i]>=97 && 122>=stg[i]){
            stg[i]=stg[i]-32;
        }
    }
    puts(stg);
}

char low(char stg[]){
    for(int i=0;stg[i]!=NULL;i++){
        if(stg[i]>=65 && 90>=stg[i]){
            stg[i]=stg[i]+32;
        }
    }
    puts(stg);
}

void main(){
    char string[100],stg1[100];
    printf("Enter any string : ");
    gets(string);
    printf("lenght of string is %d",len(string));
    printf("\nString in uppercase : ");
    cap(string);
    printf("String in lowercase : ");
    low(string);
}