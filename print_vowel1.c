#include <stdio.h>

//another process to print vowel

int main()
{
    char chr;
    scanf("%c",&chr);

    if(chr=='a'||chr=='e'||chr=='i'||chr=='o'||chr=='u')
    {
    printf("the letter is vowel\n");
    }
    else {
    printf("the letter is consonent\n");
    }
    return 0;
}
