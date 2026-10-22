//Q. 1-2+3-4+5-6+7-8....upto n terms .
#include<stdio.h>
int main(){
    int i,n,sum ;
    sum = 0 ;
    printf("Enter number n : ");
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++){
        if(i%2 != 0){
            sum = sum+i ;
           
        }
        else{
            sum = sum-i ;
            
        }
        
    }
    printf("answer of given series is %d",sum);
    return 0;
}