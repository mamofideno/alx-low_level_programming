#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include "1-main.h"
/* betty style doc for function main goes there */
/**
 * main - entry point
 *
 * Return:Always 0(Success)
 */
void print_alphabet(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar('\n');
} 
int main(void)
{
print_alphabet();
return (0);
}
