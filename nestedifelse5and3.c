#include<stdio.h>
int main(){
    int m;
    printf("Enter the number : ");
    scanf("%d",&m);

    if(m%5==0){
        if(m%3==0){
            printf("Number is divisble by 5 and 3");
        }
        else{
            printf("Number is not divisble by 5 and 3");
        }
    }
    else{
        printf("Number is not divisble by 5 and 3");
    }
    return 0;
}