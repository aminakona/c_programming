#include<stdio.h>
// check upper case and lower case.
int main(){

    char ch;
    scanf("%c",&ch);
    if (ch>='a'&& ch<='z'){
    printf("%c is lower case\n",ch);
    }
    else if (ch>='A'&& ch<='Z'){
    printf("%c is upper case\n",ch);
    }
    return 0;
}
