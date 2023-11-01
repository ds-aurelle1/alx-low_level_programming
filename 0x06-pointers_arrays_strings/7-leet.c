#include "main.h"
#include <stdio.h>

/**
 * leet - function that encode a string
 * @str:string that will be encoded
 * Return: encoded string
 */

char *leet(char *str)
{
char leet_equiv[] = "4433007711";
int j = 0;

while (str[j])
{
int i = 0;
while (leet_equiv[i])
{
if (str[j] == "aAeEoOtTlL"[i])
{
str[j] = leet_equiv[i];
break;
}
i++;
}
j++;
}

return (str);
}

