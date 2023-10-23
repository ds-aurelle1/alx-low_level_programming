#include "main.h"
#include <stdio.h>

/**
 * times_table -  prints the 9 times table, starting with 0
 *
 * Return: void so nothing
 */

void times_table(void)
{
int i = 0;
int j = 0;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
printf("%2d, ", i * j);

}
printf("\n");

}

}
