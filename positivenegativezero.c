#include<stdio.h>
int main(){
    int n ;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n>0){
        printf("positive number");
    }
    else if(n<0){
        printf("-ve number");

    }
    else{
        printf("zero");
    }
    return 0;
}