#include <stdio.h>

//check digit and use conditional operator.

int main()
{
    int n;
    scanf("%d",&n);
    if(n>=0 && n<=9)
    {
    printf("this is a digit");
    }
    else{
    printf("this is not a digit");
    }

    return 0;
}

