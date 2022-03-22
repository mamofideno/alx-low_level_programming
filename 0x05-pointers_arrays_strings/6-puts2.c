#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *puts2 - print the strings
 *
 *@s: char to be printed
 *
 *Return: return void
 */
void puts2(char *s)
{
int size;
int i;
size = strlen(s);
if (size > 0)
{
for (i = 0; i < size; i = i+ 2)
{
printf("%c", s[i]);
}
printf("\n");
}
else
printf("\n");
return;
}
