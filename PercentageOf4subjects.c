#include<stdio.h>
int main(){
    float E , H , M , S , P;
    E = 40;//eng
    H = 40;//hindi
    M = 40;//maths
    S = 36;//science
    P = (E + H + M + S)/160*100;
    printf(" Percentage out of 4 sbjects : %f",P);
    return 0;
}