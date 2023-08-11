#include<stdio.h>
struct mystruct
{
    int no;
    int sub[3];
    int sum;
    float per;
}ab[5];


void main()
{
    for(int i=0;i<2;i++){
        printf("\n--------- %d student detail ---------",i+1);
        printf("\nEnter number : ");
        scanf("%d",&ab[i].no);
        for(int j=0;j<3;j++){
            printf("Enter marks of %d sub:",j+1);
            scanf("%d",&ab[i].sub[j]);
        }
    }

    float per;
    for(int i=0;i<2;i++){
        int sum=0,max=0,min=999;
        printf("\n");
        printf("\n--------------------------------------------------");
        printf("\n                  Result");
        printf("\n--------------------------------------------------");
        for(int j=0;j<3;j++){
            sum+=ab[i].sub[j];
            if(max<ab[i].sub[j]){
                max=ab[i].sub[j];
            }
            if(min>ab[i].sub[j]){
                min=ab[i].sub[j];
            }
        }
        printf("\nTotal : %d",sum);
        per=(sum*100)/300;
        printf("\nPercentage : %.2f ",per);
        printf("\nMin : %d",min);
        printf("\nMax : %d",max);
        printf("\n--------------------------------------------------");
        if(per>89){
            printf("\nExcellent , you have passed with first class....");
        }
        else if (per > 65){
            printf("\nGood , you have passed with second class....");
        }
        else if(per > 45){
            printf("\nyou have passed with third class....");
        }
        else{
            printf("\nSorry , you have failed exam....");
        }
    }

}

// void getString(int i){
//     gets(ab[i].name);
// }