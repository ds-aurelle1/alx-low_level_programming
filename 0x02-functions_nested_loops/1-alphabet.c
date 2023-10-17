#include "main.h"
#include <stdio.h>

/**
 * main - Entry Point
 * Describe:alphabet in lowercase
 * return: void
 */

void print_alphabet(void)
{
char c = 'a';
while (c < 'z')
{
putchar(c);
c++;
}

putchar('\n');
}
