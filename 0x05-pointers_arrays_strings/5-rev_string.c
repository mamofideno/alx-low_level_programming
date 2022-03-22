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
int l;
int i;
int t;
l = strlen(s);
for (i = 1; i < l / 2; i++)
{
t = s[i];
s[i] = s[l - i - 1];
s[l - i - 1] = t;
}
return;
}
