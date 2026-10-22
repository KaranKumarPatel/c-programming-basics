#include<stdio.h>
int main(){
    int n,sum,ld;
    sum=0;
    printf("Enter your number : ");
    scanf("%d",&n);
    while(n>0){
        ld = n%10 ;
        sum = sum+ld ;
        n = n/10 ;

    }
    printf("sum of digits is %d",sum);
    return 0;
}