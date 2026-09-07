#include<stdio.h>
int main(){
    float r , pi , a;
    printf("Enter radius of circle : ");
    scanf("%f",&r);
    pi = 3.1415;
    a = pi * r * r;
    printf("Area of circle is : %f ",a);
    return 0;

}