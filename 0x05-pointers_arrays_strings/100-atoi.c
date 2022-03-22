#include "main.h"
#include <string.h>
#include <stdio.h>
/**
  *_atoi- convert string to numner
  *
  *@s: string containing number
  *
  *Return: void
  */
int _atoi(char *s)
{
int nu;
int i;
int l;
int n;
int count;
char numb;
int ss;
ss = 0;
count = 0;
nu = 0;
l = strlen(s);
for (i = 0; i < l; i++)
{
if ((s[i] == '+' || s[i] == '-' ) && count == 0)
{
numb = s[i];
}
else if ((s[i] == '+' || s[i] == '-' || s[i] == ' ') && count > 0)
{
ss = ss+1;
}
else if (s[i] >= '0' && s[i] <= '9')
{
count ++;
n = (int) s[i] - '0';
nu = nu * 10 + n;
}
}
if (numb == '-')
nu = nu * -1;
return (nu);
}
