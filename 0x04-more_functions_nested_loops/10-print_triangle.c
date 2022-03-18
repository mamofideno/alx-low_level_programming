/* more headers goes there */
#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_triangle- entry point
 *
 *@n: szie of triangle
 *
 * Return:Always void(Success)
 */
void print_triangle(int n)
{
int outer;
int k;
int j;
for(outer = 1; outer <= n; outer++)
{
for(j = n; j >= outer; j--)
_putchar(" ");
for(k = 1 ; k <= outer; k++)
_putchar("#");
_putchar("\n");
}
return 0;
}
