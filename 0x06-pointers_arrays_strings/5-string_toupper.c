#include "main.h"
#include <string.h>
#include <stdio.h>
/**
  *string_toupper- capiltize
  *@str: string to capitilzed
  *Return: char
  */
char *string_toupper(char *str)
{
int i;
int len;
len = strlen(str);
for (i = 0; i < len; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 32;
}
return (str);
}
