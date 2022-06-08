#include <stdio.h>
#include<string.h>
int main()
{
    char arr[20];
    printf("enter the string \n");
    gets(arr);
    int l= strlen(arr);
    printf("%s\n", arr);
    printf("the length of the string is %d", l);

    return 0;
}