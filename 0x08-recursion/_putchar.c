#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return:  1 in success and -1 in cse of error.
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
