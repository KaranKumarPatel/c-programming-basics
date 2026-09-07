#include<stdio.h>
int main(){
    float a , b , c , avg;
    printf("Enter value of a : ");
    scanf("%f",&a);
    printf("Enter value of b : ");
    scanf("%f",&b);
    printf("Enter value of c : ");
    scanf("%f",&c);
    avg = ( a + b + c )/3;
    printf("avg of three numbers is : %0.2f",avg);
    return 0;

}