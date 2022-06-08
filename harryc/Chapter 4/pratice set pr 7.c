#include <stdio.h>
int main()
{
    int i , sum = 0, n;
    printf("Enter the number \n");
    scanf("%d", &n);

    for ( i = 1; i <11; i++)
    {
        printf("%d X %d  =  %d\n", n,i, n*i);
    }
    
    for ( i = 0; i<11; i++)
    {
        sum +=n*i;

    }
    

    printf(" The sum is  %d\n", sum);

    return 0;
}