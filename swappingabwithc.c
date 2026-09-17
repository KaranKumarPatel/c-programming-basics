#include<stdio.h>
int main(){
    int a,b,c;
    a = 5;
    b = 6;
    printf("Before swapping : a = %d , b = %d\n", a , b );
    c=a;
    a=b;
    b=c;
    printf("\nAfter swapping : a = %d , b = %d ", a , b );
    return 0;
}