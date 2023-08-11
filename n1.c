// dont read

#include<stdio.h>

int get(char c[100],char d[100]){
    int i,diff;
    for(i=0;c[i] && d[i]!=NULL;i++){
        if(c[i]==d[i]){
            diff=c[i]-d[i];
            continue;
        }
        else{
            diff=c[i]-d[i];
            break;
        }
        return diff;
    }
}

void main(){
    char c[100],d[100];
    printf("Enter string :");
    gets(c);
    gets(d);
    printf("%d",get(c,d));
}