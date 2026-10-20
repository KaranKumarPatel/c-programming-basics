#include<stdio.h>
int main(){
    int n, i , p ;
    p = 1 ;
    printf("Enter a number : ");
    scanf("%d",&n);
    for ( i=1 ; i <= n ; i++){
        p = p * i ;
    }
    printf("Factorial of given number is : %d",p);
    return 0;

}