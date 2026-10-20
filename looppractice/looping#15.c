#include<stdio.h>
int main(){
    int n , a ,b , sum , i ;
    a = 1 ;
    b = 1 ;
    sum = 0 ;
    printf("Enter a number : ");
    scanf("%d",&n);
    if (n>=1){
        printf("%d ",a);

    }
    if (n>=2){
        printf("%d ",b);

    }
        for ( i=1 ; i<=n ; i++ ){
            sum = a+b ;
            a = b ;
            b = sum ;
            printf("%d ",sum);
        }
    return 0;
}