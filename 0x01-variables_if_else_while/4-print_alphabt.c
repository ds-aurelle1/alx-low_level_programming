#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry Point
 * Describe: poisitive values
 *Return: Always 0 (Success)
 */

int main(void)

{
  char c = 'a';
  while (c <= 'z')
    {
      if (c != 'e' && c != 'q')
	{
	  putchar(c);
	}
      c++;
    }
  putchar('\n');
  return (0);
}
