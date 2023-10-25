#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[500] = "Aurelle is a SuperWoman and ";
    char s2[] = "Best Engineer!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 4);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
