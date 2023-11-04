#include "main.h"
#include <stdio.h>

/**
 * rot13 -  encodes a string using rot13 algorithm
 * @str: string parameter function rot13 takes
 * Return: sting pointer modified or encoded
 */

char *rot13(char *str)
{
char *p = str;

while (*p) 
{
char shift = (*p >= 'a' && *p <= 'z') ? 'a' : 'A';

while ((*p >= shift && *p <= (shift + 12)) || 
(*p >= (shift + 13) && *p <= (shift + 25)))
{
*p += 13;
}
p++;
}
return str;
}

