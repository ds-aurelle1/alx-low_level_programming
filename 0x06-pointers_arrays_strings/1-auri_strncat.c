#include "main.h"
#include <stdio.h>

/**
 * _strncat - function to concatenate 2 strings
 * @dest: first parameters which is string should be added
 * @src: second parameters which is string to add
 * @n: number to byte it should print from second parameter
 * Return: first so destination string
 */

char *_strncat(char *dest, char *src, int n)
{
int index = 0;
int d_len = 0;

while (dest[index++])
d_len++;
printf("The lenght of destination after a while loop is %d\n", d_len);

for (index = 0; src[index] && index < n; index++)
{
dest[d_len++] = src[index];
}

return (dest);
}
