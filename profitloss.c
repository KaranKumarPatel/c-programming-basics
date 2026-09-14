#include<stdio.h>
int main(){
    int sp;
    printf("Enter selling price : ");
    scanf("%d",&sp);
    int cp;
    printf("Enter cost price : ");
    scanf("%d",&cp);

    if ( sp > cp ){
        printf(" PROFIT ");
    }
    if ( cp > sp ){
        printf(" LOSS ");
    }
    if ( cp == sp ){
        printf(" NO LOSS NO PROFIT ");
    }
    return 0;

}