#include "main.h"
#include <string.h>
#include <stdio.h>
/**
  *cap_string - capiltize
  *@str: string to capitilzed
  *Return: char
  */
char *cap_string(char *str)
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
