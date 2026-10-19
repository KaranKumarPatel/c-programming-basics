#include<stdio.h>
int main(){
    int i,n ;
    i=1 ;
    printf("Print table of:");
    scanf("%d",&n);
    while(i<11){
        printf("%dx%d = %d\n",n,i,n*i);
        i++ ;
    }return 0;
}