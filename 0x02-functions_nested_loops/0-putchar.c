#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 * Return: 0
 */

int main(void)
{
char l[8] = "_putchar";
int i = 0;

while (i < 8)
{
_putchar(l[i]);
i++;
}
_putchar('\n');
return (0);
}
