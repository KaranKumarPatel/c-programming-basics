#include<stdio.h>
int main(){
    int l , b , a , p ;
    printf("Enter length of a rectangle : ");
    scanf("%d",&l);
    printf("Enter breadth of a rectangle : ");
    scanf("%d",&b);
    a = l * b ;
    p = 2 * (l + b );
    
    if ( a > p ){
        printf(" Area is bigger than peri ");
    }
    else{
        printf(" Area is less than peri ");
    }
    return 0;
    
}