#include <stdlib.h>
#include <string.h>
/**
  *_strdup - create array of char
  *@str: size of array
  *
  *
  *Return: return value
  */
char *_strdup(char *str)
{
if (str == NULL)
return (NULL);
return (strdup(str));
}
