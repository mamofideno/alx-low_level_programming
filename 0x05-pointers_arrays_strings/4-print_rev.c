#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *print_rev - print the strings
 *
 *@s: char to be printed
 *
 *Return: return void
 */
void print_rev(char *s)
{
int l;
int i;
l = strlen(s);
if (l > 0)
{
for (i = 1; i < l + 1; i++)
printf("%c", s[l - i]);
printf("\n");
}
else
{
printf("\n");
}
return;
}
