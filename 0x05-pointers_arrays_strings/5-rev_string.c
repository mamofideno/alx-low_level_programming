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
l = strlen(s);
for (i = 1; i < l + 1; i++)
printf("%c", s[l - i]);
return;
}
