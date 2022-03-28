#include <string.h>
#include "main.h"
/**
 *_strchr - initilize arra
 *@s: source
 *@c: character
 *Return: Return pointer to destination array
 */
char *_strchr(char *s, char c)
{
int i;
int n; 
n = strlen(s); 
for (i = 0; i < n; i++)
{
if (s[i] == c)
return ( &s[i] );
}
return (NULL);
}
