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
char *str;
str = NULL;
size = strlen(s);
l = (size / 2);
if( l > 0)
{
for (i = 0; i <= l; i++)
{
str[i]=s[i];
}
printf("%s\n", str);
}
return;
}
