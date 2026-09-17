#include<stdio.h>
int main(){
    int ts , h , m , s ;
    printf("Enter total number of seconds : ");
    scanf("%d",&ts);
    h = ts / 3600 ;
    m = (ts % 3600) / 60 ;
    s = ( ts % 3600 ) % 60 ;
    printf(" Total seconds %d is equivalent to %d hours %d mints %d seconds ", ts , h , m , s );
    return 0;

}