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
for (ch = '0'; ch <= '9'; ch++)
{
for (s = ch + 1; s <= '9'; s++)
{
putchar(ch);
putchar(s);
if (!(ch == '8' && s == '9'))
{
putchar(',');
putchar(' ');
} 
}
}
putchar('\n');
return (0);
}
