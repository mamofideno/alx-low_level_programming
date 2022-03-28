#include <string.h>
#include "main.h"
/**
 *_strspn - strspn
 *
 *@s: string
 *@accept: accept
 *Return: bytes
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i;
char a;
a = accept[0];
for (i = 0; i < strlen(s); i++)
{
if (s[i] == a)
return (i+1);
}
return (0);
}
