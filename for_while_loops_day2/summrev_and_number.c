#include<stdio.h>
int main(){
    int n,r,ld,temp_n ;
    r = 0 ;
    printf("Enter a number : ");
    scanf("%d",&n);
    temp_n = n ;
    while(n>0){
        ld = n%10 ;
        r = r*10 + ld ;
        n = n/10 ;
    }
    printf("Rev of the number is : %d\n",r);
    int s = temp_n + r ;
    printf("\nSum of the number and its reverse is : %d",s);
    return 0;
}