#include <stdio.h>
int main()
{
     long int sal1, sal2;
    char name1[222], name2[222];
    FILE *ptr;

    printf("Enter the name  and salary of the first  employee\n");
    scanf("%s %d", &name1, &sal1);
    printf("Enter the name and salary second of employee\n");
    scanf("%s %d", &name2, &sal2);

    ptr = fopen("wolf.txt", "w");
    fprintf(ptr, "For first employee--> Name=%s , Salary=%d\n", name1, sal1);
    fprintf(ptr, "For first employee--> Name=%s , Salary=%d", name2, sal2);

    printf("process successfully completed");

    return 0;
}