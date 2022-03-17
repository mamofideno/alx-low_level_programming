/* more headers goes there */
#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_most_numbers - entry point
 *
 * Return:Always 0(Success)
 */
void print_most_numbers(void)
{
int ch;
for (ch = 0; ch <= 9; ch++)
{
if(ch !=2 && ch != 4)
_putchar(ch);
}
_putchar('\n');
return;
}
