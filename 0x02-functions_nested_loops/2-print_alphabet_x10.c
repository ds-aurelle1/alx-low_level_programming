#include "main.h"

/**
 * print_alphabet_x10 - print 10 times lowercase alphabet
 * Return: void
 */

void print_alphabet_x10(void)
{
int i = 0;
char j;
while (i <= 10)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}

_putchar(i);
i++;
}

}
