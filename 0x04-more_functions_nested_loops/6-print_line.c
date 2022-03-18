/* more headers goes there */
#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_line - entry point
 *
 * Return:Always 0(Success)
 */
void print_line(int h)
{
int ch;
for (ch = 0; ch < h; ch++)
{
_putchar('-');
}
_putchar('\n');
return;
}
