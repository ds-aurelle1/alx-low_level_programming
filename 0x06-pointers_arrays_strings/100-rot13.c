#include "main.h"
#include <stdio.h>

/**
 * rot13 -  encodes a string using rot13 algorithm
 * @str: string parameter function rot13 takes
 * Return: sting pointer modified or encoded
 */

char *rot13(char *str)
{
int i =0;

while (str[i])
{
if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
{
str[i] += 13;
}
else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
{
str[i] -= 13;
}
i++;
}

return (str);
}
