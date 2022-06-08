#include<stdio.h>

int main(){
    // char str[] = "Harry";77
    char str[] = {'H', 'a', 'r', 'r', 'y', '\0'};
    char *ptr = str;
    while(*ptr!='\0'){
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}