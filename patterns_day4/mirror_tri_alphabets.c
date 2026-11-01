#include<stdio.h>
int main(){
    int i,j,n,k,d ;
    printf("Enter number of rows : ");
    scanf("%d",&n);

    for(i=1 ; i<=n ; i++){ //rows
        for(j=1 ; j<=n-i ; j++){ //spaces
            printf("  ");

        }
        d = 65 ;
        for(k=1 ; k<=i ; k++){
            char ch = (char)d ;
            printf("%c ",ch);
            d++ ;
        }
        printf("\n");
    }
    return 0;

}