#include<stdio.h>
int main(){
    int n ;
    printf("Enter the number : ");
    scanf("%d",&n);

    if ( n % 5 == 0 ){
        printf("Number is divisible by 5\n");
    }
    if ( n % 3 == 0 ){
        printf("Number is divisible by 3");
    }
        
    if ( n % 5 != 0 && n % 3 != 0){
        printf("Number is not divisible by 5 and 3 both ");
    }
    return 0;

}