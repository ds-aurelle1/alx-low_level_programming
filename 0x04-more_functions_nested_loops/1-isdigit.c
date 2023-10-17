#include "main.h"
/**
*_isdigit - check if a  char is a digit or not
*@c: tested character
*Return: returns 1 if it is uppercase , 0 else
*/

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);

return (0);
}
