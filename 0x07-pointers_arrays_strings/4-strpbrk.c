#include <string.h>
#include "main.h"
/**
 *_strpbrk - initilize arra
 *@s: source
 *
 *@accept: character
 *Return: Return pointer to destination array
 */
char *_strpbrk(char *s, char *accept)
{
int i;
int n;
int outsize;
int outer;
outsize = strlen(accept);
n = strlen(s);
for(i = 0; i < n; i++)
{
for (outer = 0; outer < outsize; outer++)
{
if (s[i] == accept[outer])
return (&s[i]);
}
}
return (NULL);
}
