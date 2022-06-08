#include <stdio.h>
int main()
{

    int arr[10];
    int *ptr;
    ptr= &arr[1];

    for (int i = 1; i <= 4; i++)
    {
    printf("Enter the marks of student %d \n",i);
    scanf("%d",ptr);
    ptr++;
    }
    for (int i = 1; i <= 4; i++)
    {
    printf(" the marks of student %d is %d\n",i,arr[i]);
   
    }
    

    return 0;
}