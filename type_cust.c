#include <stdio.h>
// about type cust
    int main()
{
    int x,y;
    x=1;
    y=x;
    x=2;
    printf("result is %d",y);
    printf("  , ");

    int a=50,b=60,sum=a+b;
    printf("%d+%d=%d",a,b,sum);
    printf("  , ");

    int n;
    double m;
    m=10.5;
    n=(int)m;
    printf("value of n is %d\n",n);
    printf("value of m is %lf\n",m);
    return 0;
}
