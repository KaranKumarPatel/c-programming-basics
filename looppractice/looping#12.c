#include<stdio.h>
int main(){
    int r,ld,n ;
    printf("Enter the number : ");
    scanf("%d",&n);
    r = 0 ;
    while (n>0){
        ld = n%10 ;
        r = r*10 + ld ;
        n = n/10 ;

    }
    printf("reverse of given number is : %d",r);
    return 0;
}