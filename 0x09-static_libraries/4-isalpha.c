#include "main.h"

/**
 * _isalpha - check alphabetic character
 * @c: parameter with int return value
 * Return: 1 if c letter is lower or upper and 0 else
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') | (c >= 'A' && c <= 'Z'))
{
return (1);
return (0);
}

return (0);
}
