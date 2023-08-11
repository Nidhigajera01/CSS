// count of character

#include<stdio.h>

void main(){
    int count=0,cnt1=0,cnt2=0,cnt3=0,cnt4=0,cnt5=0,cnt6=0,cnt7=0;
    char ca[100];
    printf("Enter your name : ");
    gets(ca);
    printf("\n");
    puts(ca);
    for(int i=0;ca[i]!=NULL;i++){
        count++;
        printf("\nca[%d] = %c",i,ca[i]);
        if(ca[i]>=65 && ca[i]<=90){
            cnt1++;
        }
        if(ca[i]>=97 && ca[i]<=122){
            cnt2++;
        }
        if(ca[i]>=33 && ca[i]<=47 || ca[i]>=58 && ca[i]<=64 || ca[i]>=91 && ca[i]<=96 || ca[i]==126){
            cnt3++;
        }
        if(ca[i]>=48 && ca[i]<=57){
            cnt4++;
        }
        if(ca[i]=='A' || ca[i]=='A' || ca[i]=='E' || ca[i]=='I' || ca[i]=='O' || ca[i]=='U' || ca[i]=='a' || ca[i]=='e' || ca[i]=='i' || ca[i]=='o' || ca[i]=='u'){
            cnt5++;
        }

        if(ca[i]==32){
            cnt6++;
        }
        if(ca[i]==32 || ca[i+1]!=32){
            cnt7++;
        }
    }
    printf("\ntotal characters : %d",count);
    printf("\nuppercase : %d",cnt1);
    printf("\nlowercase : %d",cnt2);
    printf("\nspecial : %d",cnt3);
    printf("\nnumbers : %d",cnt4);
    printf("\nvowels : %d",cnt5);
    printf("\nspace : %d",cnt6);
    printf("\nwords : %d",cnt7+1);
}