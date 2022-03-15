/* more headers goes there */
#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_alphabet_x10 - display alphabet
 *
 * Return:Always void
 */
void print_alphabet_x10(void)
{
int i;
for(i = 0; i < 10; i++)
{    
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
}
return;
}
