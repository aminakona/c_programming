#include<stdio.h>

//use of  nested conditional logic.

int main ()
{
    int marks;
    char grade;
    printf("enter your marks");
    scanf("%d",&marks);
    if(marks>=80){
    grade='A';
    printf("your grade is %c\n",grade);
    }
    else if(marks>=70){
    grade='B';
    printf("your grade is %c\n",grade);
    }
    else if(marks>=60){
    grade='C';
    printf("your grade is %c\n",grade);
    }
    else if(marks>=50){
    grade='D';
    printf("your grade is %c\n",grade);
    }
    else if(marks>=40){
    grade='E';
    printf("your grade is %c\n",grade);
    }
    else if(marks>=30){
    grade='F';
    printf("your grade is %c\n",grade);
    }
    return 0;
}
