#include<stdio.h>
int main(){
    int a,b ;
    a = 10;
    b = 20;
    printf("before swapping a = %d , b = %d\n ", a , b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping a = %d , b = %d ", a , b);
    return 0;
}