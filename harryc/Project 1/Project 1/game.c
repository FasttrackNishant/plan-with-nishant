#include <stdio.h>
int main()
{
    int a;
    printf("Enter the Marks of the student\n");
    scanf("%d",&a);

    if (a>90 && a<=100)
    {
            printf("you have acquired the A+ Grade\n");
    }
    
   else  if (a>80 && a <=90 )
    {
            printf("you have acquired the A Grade\n");
    }
    
    else if (a>70 && a<=80 )
    {
            printf("you have acquired the  B Grade\n");
    }
    else
    {
        printf("You have less grade");
    }
    return 0;
}