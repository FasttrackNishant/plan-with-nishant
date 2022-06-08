#include <stdio.h>
#include<stdlib.h>
int main()

{
    int *ptr;
    int n;
    ptr = (int *)calloc(n , sizeof(int));

    printf("Enter the size of the array you wants to be created \n");
    scanf("%d", &n);

    printf("Enter the value of the marks of the student\n");
     for (int i = 0; i < n; i++)
    {
        printf("Enter  the value of %d th student \n", i+1);

        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("the marks of the student %d is %d\n", i+1, ptr[i]);
    }
    printf("size of ptr %d", sizeof(ptr) );
   
    ptr = (int *)realloc(ptr ,n* sizeof(int));

    printf("Enter the size of the array you wants to be created \n");
    scanf("%d", &n);

    printf("Enter the value of the marks of the student\n");
     for (int i = 0; i < n; i++)
    {
        printf("Enter  the value of %d th student \n", i+1);

        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("the marks of the student %d is %d\n", i+1, ptr[i]);
    }
    free(ptr);
   
}