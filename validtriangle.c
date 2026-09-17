#include<stdio.h>
int main(){
    int a , b , c ;
    printf("Enter side a :");
    scanf("%d",&a);
    printf("Enter side b : ");
    scanf("%d",&b);
    printf("Enter side c : ");
    scanf("%d",&c);

    if( ( a + b > c )  && ( b + c > a ) && ( c + a > b ) ){
        printf("valid triangle");

    }
    else{
        printf("invalid triangle");
    }
    return 0;
}