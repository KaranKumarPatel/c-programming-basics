#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    if( n % 5 == 0 || n % 3 == 0 ){
        if( n % 15 != 0 ){
            printf("Number is divisble by 5 or 3 but not 15 ");
        }
        else{
           printf("Number is divisble by 15 ");  
        }
    }
    else{
        printf("Number is not divisble by 5 or 3 and 15 ");
    }
    return 0;
}