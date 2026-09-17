#include<stdio.h>
int main(){
    int a , b , c ;
    printf("Enter 1st no. : ");
    scanf("%d",&a);
    printf("Enter 2nd no. : ");
    scanf("%d",&b);
    printf("Enter 3rd no. : ");
    scanf("%d",&c);

    if(a > b && a > c){
        printf(" %d is greatest ",a);
    }
    if(b > c && b > a ){
        printf(" %d is grtst ",b);
    }
    if(c > a && c > b ){
        printf(" %d is grtst ",c);
    }
    return 0;
}