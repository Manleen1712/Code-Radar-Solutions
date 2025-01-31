#include <stdio.h>
int main()
{
    int x;
    scanf("%c",&x);
    if((x>='A')&&(x<='Z'))
    {
        printf("Lowercase");
    }
    else{
        printf("Uppercase");
    }
}