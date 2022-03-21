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
int i;
char *str;
str =NULL;
size = (int) strlen(s)/2;
for (i = 0; i<= size; i++)
{
str[i]=s[i];
}
printf("%s\n", str);
return;
}
