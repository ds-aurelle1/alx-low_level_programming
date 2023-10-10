#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry Point
 * Description: prints single digit of base 10
 * Return: Always 0 (Success)
 */
int main(void)
{
char c = '0';

while (c <= '9')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
