#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *puts_half - print the strings
 *
 *@s: char to be printed
 *
 *Return: return void
 */
void puts_half(char *s)
{
int size;
int l;
int i;
size = strlen(s);
if ( size % 2 == 0)
l = size / 2;
else
l = (size -1) / 2;
if( l > 0)
{
for (i = l; i < size; i++)
{
printf("%c", s[i]);
}
}
else
printf("\n");
return;
}
