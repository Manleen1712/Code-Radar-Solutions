#include <stdio.h>
int main()
{
    int x;
    scanf("%c",&x);
    if(x>='a')&&(x<='z')
    {
        printf("Lowercase");
    }
    else{
        printf("Uppercase");
    }
}