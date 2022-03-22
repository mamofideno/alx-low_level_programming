#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *rev_string - print the strings
 *
 *@s: char to be printed
 *
 *Return: return void
 */
void rev_string(char *s)
{
int l;
int i;
int t;
l = strlen(s);
for (i = 0; i < l / 2; i++)
{
t = s[i];
s[i] = s[l - i - 1];
s[l - i - 1] = t;
}
return;
}
