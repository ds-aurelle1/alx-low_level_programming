#include "main.h"

/**
*cap_string - function that capitalize first character of a word
*@str: string to capitalize
*Return:returns the capitalized string
*/

char *cap_string(char *stri)
{
int index = 0;

while (stri[++index])
{
while (!(stri[index] >= 'a' && stri[index] <= 'z'))
index++;

if (stri[index - 1] == ' ' ||
stri[index - 1] == '\t' ||
stri[index - 1] == '\n' ||
stri[index - 1] == ',' ||
stri[index - 1] == ';' ||
stri[index - 1] == '.' ||
stri[index - 1] == '!' ||
stri[index - 1] == '?' ||
stri[index - 1] == '"' ||
stri[index - 1] == '(' ||
stri[index - 1] == ')' ||
stri[index - 1] == '{' ||
stri[index - 1] == '}')
stri[index] -= 32;
}
return (stri);
}
