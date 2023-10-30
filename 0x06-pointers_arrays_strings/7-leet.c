#include "main.h"
/**
* leet - function that encode a string
*@str:string that will be encoded
*Return:returns encoded string
*/

char *leet(char *str)
{

char *leet_chars = "aAeEoOtTlL";
char *leet_equiv = "4433007711";

while (*str != '\0')
{
int i = 0;
int found = 0;

while (leet_chars[i] != '\0')
{
if (*str == leet_chars[i])
{
*str = leet_equiv[i];
found = 1;
break;
}
i++;
}
if (!found)
{
i = 0;
while (leet_chars[i] != '\0')
{
if (*str == leet_chars[i] + 32)
{
*str = leet_equiv[i];
break;
}
i++;
}
}

str++;
}

return (str);
}
