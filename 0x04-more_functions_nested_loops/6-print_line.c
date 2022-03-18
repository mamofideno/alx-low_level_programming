/* more headers goes there */
#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_line - entry point
 *
 *@h: input
 *
 * Return:Always 0(Success)
 */
void print_line(int h)
{
int ch;
for (ch = 1; ch <= h; ch++)
{
_putchar('_');
}
_putchar('\n');
return;
}
