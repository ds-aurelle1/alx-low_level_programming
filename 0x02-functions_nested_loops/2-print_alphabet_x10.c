#include <stdio.h>
#include "main.h"

/**
 * void print_alphabet_x10 - print alphabet in lowecase 1 times
 * return:0
 */

void print_alphabet_x10(void)
{
int i = 0;

while (i < 10)
{
char j = 'a';
while (j <= 'z')
{
putchar(j);
j++;
}
putchar('\n');
i++;

}

}
