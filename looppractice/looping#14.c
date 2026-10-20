#include<stdio.h>
int main(){
    int n , a ,b , sum , i ;
    a = 1 ;
    b = 1 ;
    sum = 0 ;
    printf("Enter a number : ");
    scanf("%d",&n);
    if ( n == 1 || n == 2 ){
        printf("fibonacci number is 1\n");

    }
    else{
        for ( i=1 ; i<=n ; i++ ){
            sum = a+b ;
            a = b ;
            b = sum ;
        }
        printf("Fibonacci number is : %d",sum);
    }
    return 0;
}