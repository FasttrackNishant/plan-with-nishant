#include <stdio.h>
int main()
{
    int arr[4];
    int *ptr;
    ptr = &arr[0];

    for (int i = 0; i < 4; i++)
    {
        printf("enter the marks of the students %d \n", i+1);
        scanf("%d", ptr);
        ptr++;
    }

    for (int i = 0; i < 4; i++)
    {
        printf("the marks of the students %d \n",arr[i]);

    }
        return 0;
}