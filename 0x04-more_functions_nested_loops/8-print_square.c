/* more headers goes there */
#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_square - entry point
 *
 *@h: siize of square
 *
 * Return:Always 0(Success)
 */
void print_square(int h)
{  
int ch;
int outer;
for (outer = 1; outer <= h; outer++)
{
for (ch = 1; ch <= h; ch++)
{
_putchar('#');
}
}
_putchar('\n');
return;
}
