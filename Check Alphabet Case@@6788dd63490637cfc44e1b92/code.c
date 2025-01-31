#include <stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    if((x>='a')&&(x<='z'))
    {
        printf("Lowercase");
    }
    else{
        printf("Uppercase");
    }
    return 0;
}