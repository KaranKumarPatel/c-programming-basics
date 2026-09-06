#include<stdio.h>
int main(){
    float m1 , m2 , m3 , m4 , m5 , p;
    m1 = 95;//eng
    m2 = 92;//sci
    m3 = 95;//sst
    m4 = 95;//maths
    m5 = 95;//hindi
    p = ( m1 + m2 + m3 + m4 + m5 )/500 * 100 ;
    printf(" Total percentage out of 5 subjects is :%f ",p);
    return 0;
}