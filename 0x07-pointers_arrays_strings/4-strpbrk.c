#include <string.h>
#include "main.h"
/**
 *_strpbrk - initilize arra
 *@s: source
 *
 *@accept: character
 *Return: Return pointer to destination array
 */
char *_strchr(char *s, char *accept)
{
int i;
int n;
int outer;
n = strlen(s);
for(outer = 0; outer < strlen(accept); outer++)
{
for (i = 0; i < n; i++)
{
if (s[i] == accept[outer])
return (&s[i]);
}
}
return (NULL);
}
