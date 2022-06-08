#include <stdio.h>
int main()
{
    int i, sum = 0, n = 0;
    printf("enter the value of the \n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        sum += i;
        //printf("%d \n",i);
    }
    printf("%d \n", sum);

 }