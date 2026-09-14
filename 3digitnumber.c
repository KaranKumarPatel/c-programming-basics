#include<stdio.h>
int main(){
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);

    if ( a > 99 && a < 1000 ){
        printf(" its a 3-digit number ");
    }
    else{
        printf("Not a 3 digit number");
    }
    return 0;
}