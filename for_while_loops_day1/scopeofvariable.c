#include<stdio.h>
int main(){
    int n ;
    printf("Enter n: ");
    scanf("%d",&n);
    for (int i=1 ; i<=n ; i++){
        printf("+\n");
    }
    //printf("%d",i); (i undeclared hai for{} ke bahar)
    return 0;

}