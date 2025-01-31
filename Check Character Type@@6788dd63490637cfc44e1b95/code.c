#include <stdio.h>
int main()
{
    int x;
    scanf("%c",&a);
    if((x=='a')||(x=='e')||(x=='i')||(x=='o')||(x=='u'))
    {
        printf("Vowel",x);
    }
    else if((x>=0)||(x<=9))
    {
        printf("Digit");
    }
    else
    {
        printf("Consonent");
    }
}