#include<stdio.h>

//practise while loop for print sequential number.
//print even number from 2 to 100.

int main()
{
    int n;
    n=1;
    while(n<=100){
        if(n%2==0){
            printf("%d\n",n);
            }
            n++;      // used n++ for increase value of n instead of n=n+1.
    }

   return 0;
}
