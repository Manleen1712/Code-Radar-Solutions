#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=0; i<rows ; i++){
        for(int j=0, j<rows-i , j++){
            printf("* ");
        }
        
    }
    printf("\n");
}