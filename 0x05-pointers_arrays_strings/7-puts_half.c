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
