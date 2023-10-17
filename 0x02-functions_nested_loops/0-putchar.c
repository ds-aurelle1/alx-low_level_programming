#include "main.h"
#include <stdio.h>

/**
 * main - Entry Point
 * Describe: write _putchar
 * Return: Always 0
 */

int main(void)
{
char a[8] = "_putchar";
int b = 0;
while (b < 8)
{
putchar(a[b]);
b++;
}

putchar('\n');

return (0);
}
