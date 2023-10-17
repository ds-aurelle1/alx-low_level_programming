#include "main.h"
/**
*_isupper - check if a  char is uppercase or not
*@c: tested character
*Return: returns 1 if it is uppercase , 0 else
*/

int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);

return (0);
}
