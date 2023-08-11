#include<stdio.h>
#include<conio.h>
void main() {
    int s1,s2,s3,s4,s5,sum,temp1,temp2;
    float per;
    printf("\tResult");
    printf("\n-------------------------------");
    printf("\nName : ABC");
    printf("\n-------------------------------");
    printf("\nsub1 :");
    scanf("%d",&s1);
    printf("sub2 :");
    scanf("%d",&s2);
    printf("sub3 :");
    scanf("%d",&s3);
    printf("sub4 :");
    scanf("%d",&s4);
    printf("sub5 :");
    scanf("%d",&s5);
    printf("\n---------------------------------");
    sum=s1+s2+s3+s4+s5;
    printf("\nToatal is : %d",sum);
    
    temp1=s1>s2?(s1>s3?(s1>s4?(s1>s5?s1:s5):(s4>s5?s4:s5)):(s3>s4?(s3>s5?s3:s5):(s4>s5?s4:s5))):(s2>s3?(s2>s4?(s2>s5?s2:s5):(s4>s5?s4:s5)):(s3>s4?(s3>s5?s3:s5):(s4>s5?s4:s5)));
    printf("\n%d is maximum.",temp1);

    temp2=s1<s2?(s1<s3?(s1<s4?(s1<s5?s1:s5):(s4<s5?s4:s5)):(s3<s4?(s3<s5?s3:s5):(s4<s5?s4:s5))):(s2<s3?(s2<s4?(s2<s5?s2:s5):(s4<s5?s4:s5)):(s3<s4?(s3<s5?s3:s5):(s4<s5?s4:s5)));
    printf("\n%d is minimum.",temp2);
    
    printf("\n---------------------------------");

    per=sum/5;
    printf("\npercentage is : %f",per);
    printf("\n---------------------------------");

    if(per>80){
        printf("\nYour grade is A");
    }
    else if(per>65){
        printf("\nYour grade is B");
    }
    else if(per>45){
        printf("\nYour grade is C");
    }
    else if(per>33){
        printf("\nYour grade is D");
    }
    else{
        printf("\nYour grade is FF");
    }

    if(per<=33){
        printf("\nYou are fail....");
    }
    else{
        printf("\nYou are pass....");
    }
}