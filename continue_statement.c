#include<stdio.h>

//use of continue statement.

int main()
{
    int n=0;
    while(n<10){
        n=n+1;
        if(n%2==0){      //continue statement prevent to work the next statement of loop  when the if condition satisfied.
        continue;
        }
        printf("%d\n",n);
    }
    return 0;
}
