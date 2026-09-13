#include<stdio.h>
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    if ( a % 5 == 0 ){
        printf("number is divisble by 5");
    }
    else{
        printf("Number is not divisble by 5");
    }
    return 0;
}