#include<stdio.h>
int main(){
    int i,j,n,k ;
    printf("Enter number of rows : ");
    scanf("%d",&n);

    for(i=1 ; i<=n ; i++){ //rows
        for(j=1 ; j<=n-i ; j++){ //spaces
            printf(" ");

        }
        for(k=1 ; k<=i ; k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;

}