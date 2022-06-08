#include <stdio.h>
int main()
{
    char ascii;
    char cha;
    printf("enter the letter \n");
    scanf("%c",&ascii);


    if (ascii>65 && ascii<90)
    {
        printf("The given letter is upper case\n");

    }
    else if(ascii>97 && ascii<122)
    {
        printf("The given letter is lowercase\n");
    
    }
    return 0;
}