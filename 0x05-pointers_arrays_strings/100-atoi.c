#include "main.h"
/**
  *_atoi- convert string to numner
  *
  *@s: string containing number
  *
  *Return: void
  */
int _atoi(char *s)
{
  int l = strlen(s);
  int count=0;
  char numb[l];
  int num;
  num = 1;
  for (int i = 0; i < l; i++){
    if((s[i] == '+' || s[i] == '-' ) && count ==0)
      {
	numb[0]=s[i];

      }
    else if(s[i] >= '0' && s[i] <= '9')
      {
	numb[num]=text[i];
	count ++;
	num ++;
      }

  }
  printf("%s",numb);
} 
