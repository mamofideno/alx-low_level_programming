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
for (ch = 'a'; ch <= 'z'; ch++)
if (!(ch == 'e' || ch == 'q'))
putchar(ch);
putchar('\n');
return (0);
}
