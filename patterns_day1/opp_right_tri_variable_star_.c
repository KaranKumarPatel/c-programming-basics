#include<stdio.h>
int main(){
    int i,n,j,a;
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    a=n ;
    for(i=1;i<=n;i++){
        for(j=1 ; j<=a ; j++){
            printf("* ");
        }
        printf("\n");
        a-- ;
    }
    return 0;
}