/* more headers goes there */
#include "main.h"
/* betty style doc for function main goes there */
/**
 * more_numbers - entry point
 *
 * Return:Always 0(Success)
 */
void more_numbers(void)
{
int h;
for (h = "0"; h < "14"; h++)
{
int ch;
for (ch = '0'; ch <= '9'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
return;
}
