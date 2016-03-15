#include<stdio.h>

//we can use break statement to stop loop before satisfy the codition.

int main()
{
    int n;
    n=1;
    while(n<=100){   // condition for the number n is less than or equal of 100
        printf("%d\n",n);
        n++;
        if(n>10){
        break;       //when n is greater than 10 ,break statement helps to stop the loop.
        }
    }

        return 0;
}
