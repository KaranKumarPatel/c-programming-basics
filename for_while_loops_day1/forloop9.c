#include<stdio.h>
int main(){
    int i,n,a ;
    a=1 ;
    printf("Enter nth term : ");
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++){
        printf("%d ",a);
        a=a+2 ;
    }
    return 0;
}