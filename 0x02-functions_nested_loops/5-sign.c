#include "main.h"
#include <stdio.h>

/**
 * print_sign - prin the sign of number
 * @n: parameter that return int value
 * Return: +1 if positive, 0 if null and -1 if negative
 */

int print_sign(int n)
{
if (n > 0)
{
printf("+");
return (1);
}

else if (n < 0)
{
printf("-");
return (1);
}

else
{
return (0);
}

return (0);
}
