#include "main.h"
#include <ctype.h>

/**
*cap_string - function that capitalize first character of a word
*@str: string to capitalize
*Return:returns the capitalized string
*/

char *cap_string(char *str)
{
int i = 0;
int capitalize = 1; /*say if next character should be capitalized*/

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' ||
str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' ||
str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{
capitalize = 1;
}
else
{
if (capitalize)
{
str[i] = toupper(str[i]);
capitalize = 0;
}
else
{
str[i] = tolower(str[i]);
}
}
}
return (str);
}

