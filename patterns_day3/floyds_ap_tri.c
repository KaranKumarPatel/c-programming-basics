#include<stdio.h>
int main(){
    int i,j,n,a ;
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    a = 1 ;
    for(i=1 ; i<=n ; i++){
        for(j=1 ; j<=i ; j++){
            printf("%d ",a);
            a = a+2 ;
        }
        printf("\n");
    }
    return 0;
}