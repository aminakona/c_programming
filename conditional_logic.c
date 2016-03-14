#include <stdio.h>

//define the number if negetive or positive.

int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n>0){
        printf("The number is positive.\n");
    }
    else  if(n<0) {
        printf("The number is negetive.");
    }
    else if(n==0){
        printf("The number is zero(0)");
    }
    return 0;

 }
