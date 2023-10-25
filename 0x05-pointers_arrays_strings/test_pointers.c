#include <stdio.h>

/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)  
{
*cc = 'o';
ccc = 'l';
printf("value of *cc is %c\n", *cc);
printf("value of ccc is %c\n",ccc);
printf("address of *cc is %p\n", &cc);
printf("address of ccc is %p\n", &ccc);
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
char c;
char *p;

p = &c;
c = 'H';

printf("value of c: %c\n", c);
printf("value of 'p': %p\n", p);
printf("address of 'c': %p\n", &c);
printf("address of 'p': %p\n", &p);
printf("value of p stars: %d\n", *p);

modif_my_char_var(p, c);

printf("value of c after function call is %c\n", c);

return (0);
}
