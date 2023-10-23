#include "main.h"

/**
*times_table - prints the 9 times table
*
*Return: returns nothing
*/
void times_table(void)
{
int dig, m, r;
for (dig = 0; dig <= 9; dig++)
{
_putchar('0');

for (m = 1; m <= 9; m++)
{
_putchar(',');
_putchar(' ');
r = dig * m;
if (r <= 9)
_putchar(' ');
else
_putchar((r / 10) + '0');

_putchar((r % 10) + '0');
}
_putchar('\n');
}
}
