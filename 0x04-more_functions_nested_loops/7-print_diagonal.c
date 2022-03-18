/* more headers goes there */
#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_diagonal - entry point
 *
 * Return:Always 0(Success)
 */
void print_diagonal(int hh)
{
int h;  
int ch;
h=hh; 
for (ch = 1; ch <= h; ch++)
{
_putchar(' ');
}
_putchar('\\'); 
_putchar('\n');
return;
}
