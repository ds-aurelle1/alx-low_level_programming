#include "main.h"
/**
* leet - function that encode a string
*@str:string that will be encoded
*Return:returns encoded string
*/

char *leet(char *str)
{
char leet_equiv[] = "4433117700";

while (*str)
{
int i = 0;
while (leet_equiv[i]) 
{
if (*str == "aAeElLtToO"[i])
{
*str = leet_equiv[i];
break;
}
i++;
}
str++;
}
return (str);
}
