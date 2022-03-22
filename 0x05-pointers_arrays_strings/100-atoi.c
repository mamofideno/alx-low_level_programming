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
  int l = strlen(s);
  int count=0;
  char numb[l];
  int num;
  num = 1;
  for (i = 0; i < l; i++)
    {
      if((s[i] == '+' || s[i] == '-' ) && count ==0)
	{
	  numb[0]=s[i];

	}
      else if(s[i] >= '0' && s[i] <= '9')
	{
	  numb[num]=s[i];
	  count ++;
	  num ++;
	}

    }
  nu=0;
  for(int i=1;i<count;i++)
    {
      nu=nu*10+numb[i];
    }
  if(numb[0] == '-')
    nu=nu*-1;  
  return (nu);
} 
