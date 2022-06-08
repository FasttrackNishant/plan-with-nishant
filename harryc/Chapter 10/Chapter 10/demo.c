#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("blue.txt", "r");
    char
    fscanf(ptr, "%d", &num);
    printf("%d", num);
    return 0;
}