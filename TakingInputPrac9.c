#include<stdio.h>
int main(){
    float a , b , c , avg;
    printf("Enter value of a : ");
    printf("Enter value of b : ");
    printf("Enter value of c : ");
    scanf("%f %f %f",&a , &b , &c);
    avg = ( a + b + c )/3;
    printf("avg of three numbers is : %0.1f",avg);
    return 0;

}