#include<stdio.h>
int main(){
    int n,sum,ld ;
    sum=0 ;
    printf("Enter number : ");
    scanf("%d",&n);
    while(n!=0){
        ld = n%10; 
        if(ld%2==0){
            sum = sum+ld ;
        }
        n = n/10;
    }
    printf("sum of even digits is %d",sum);

    return 0;
}