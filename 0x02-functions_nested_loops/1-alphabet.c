#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 * _putchar: should be use 2 times max
 * Return: 0
 */

void print_alphabet(void)
{
char i;
for (i = 'a'; i < 'z'; i++)
{
_putchar(i);
}

_putchar('\n');
return (0);
}
