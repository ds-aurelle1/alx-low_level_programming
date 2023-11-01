#include "main.h"
#include <stdio.h>

/**
 * rot13 -  encodes a string using rot13 algorithm
 * @str: string parameter function rot13 takes
 * Return: sting pointer modified or encoded
 */

char *rot13(char *str)
{
char *orig_str = str;
while (*str)
{
char base = (*str >= 'a' &&
		*str <= 'z') ? 'a' : (*str >= 'A' &&
			*str <= 'Z') ? 'A' : 0;
if (base)
{
*str = (((*str - base + 13) % 26) + base);
}
str++;
}
return (orig_str);
}
