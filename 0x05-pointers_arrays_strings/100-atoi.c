#include "main.h"
#include <string.h>
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
  int count;
  char numb;
  count = 0;
  nu = 0;
  l = strlen(s);
  for (i = 0; i < l; i++)
    {
      if((s[i] == '+' || s[i] == '-' ) && count == 0)
	{
	  numb = s[i];

	}
      else if(s[i] >= '0' && s[i] <= '9')
	{
	  count ++;
	  nu = nu *10 + s[i];
	}

    }
  nu=0;
  if(numb == '-')
    nu = nu * -1;
  return (nu);
}
