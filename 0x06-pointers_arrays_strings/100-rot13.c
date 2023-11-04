#include "main.h"
#include <stdio.h>

/**
 * rot13 -  encodes a string using rot13 algorithm
 * @str: string parameter function rot13 takes
 * Return: sting pointer modified or encoded
 */

char *rot13(char *str)
{
char aa[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char bb[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i = 0;
while (str[i])
{
int j = 0;
for (j = 0; j < 52; j++)
{
if (str[i] == aa[j])
{
str[i] = bb[j];
break;
}
}

i++;
}

return (str);
}

