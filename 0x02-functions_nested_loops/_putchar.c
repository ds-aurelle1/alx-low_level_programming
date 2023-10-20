#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c - parameter the function takes
 * Return: On success 1.
 * On error, -1 is returned, and errno is set approprialtely.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
