#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - entry point
 *
 * Return:Always 0(Success)
 */
int main(void)
{
int ch;
int s;
int l;
for (ch = '0'; ch <= '9'; ch++)
{
for (l = ch + 1; l <= '9'; l++)
{
for (s = l + 1; s <= '9'; s++)
{
putchar(ch);
putchar(l);
putchar(s);
if (!(ch == '7' && l == '8' && s == '9'))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
