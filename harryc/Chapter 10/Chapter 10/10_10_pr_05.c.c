#include <stdio.h>
int main()
{
    int num;
    FILE *ptr;
    FILE *ptr2;

    ptr = fopen("wolf.txt", "r");
    ptr2 = fopen("blue.txt", "w");

    fscanf(ptr, "%d", &num);
    fprintf(ptr2, "the value of the %d after doubling is=%d", num, num * 2);

    fclose(ptr);
    printf("process successfully completed");
    return 0;
}