/* more headers goes there */
#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_alphabet - display alphabet
 *
 * Return:Always void
 */
void print_alphabet(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
return;
}
