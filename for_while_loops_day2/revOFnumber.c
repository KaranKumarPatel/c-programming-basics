#include<stdio.h>
int main(){
    int n,ld,r;
    r=0;
    printf("Enter n : ");
    scanf("%d",&n);
    while(n>0){
        ld = n%10 ;
        r = r*10 + ld ;
        n = n/10 ;
    }
    printf("reverse of the given number is : %d",r);
    return 0;
}