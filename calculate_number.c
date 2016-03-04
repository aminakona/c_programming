#include <stdio.h>

int main(){
   /* int num1,num2;
    printf("Please enter num1:");
    scanf("%d",&num1);
    printf("Please enter num2:");
    scanf("%d",&num2);
    printf("%d+%d=%d\n",num1,num2,num1+num2);
    printf("%d-%d=%d\n",num1,num2,num1-num2);
    printf("%d*%d=%d\n",num1,num2,num1*num2);
    printf("%d/%d=%d\n",num1,num2,num1/num2);*/
    int num1,num2,value;
    printf("Please enter num1:");
    scanf("%d",&num1);
    printf("Please enter num2:");
    scanf("%d",&num2);
    value=num1+num2;
    printf("sum is:%d\n", value);
    value=num1-num2;
    printf("substract is:%d\n", value);
    value=num1*num2;
    printf("multiplication is:%d\n", value);
    value=num1/num2;
    printf("division is:%d\n", value);

    return 0;
}
