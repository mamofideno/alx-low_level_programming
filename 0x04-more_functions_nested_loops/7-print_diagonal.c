/* more headers goes there */
#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_diagonal - entry point
 *
 *@h: diagonal
 *
 * Return:Always 0(Success)
 */
void print_diagonal(int h)
{
int ch;
int i;
for (ch = 1; ch <= h; ch++)
{
_putchar(' ');
}
_putchar('\n');
return;
}
