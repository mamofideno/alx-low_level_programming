#include <string.h>
#include "main.h"
/**
 *_strstr - initilize arra
 *@haystack: source
 *
 *@needle: character
 *Return: Return pointer to destination array
 */
char *_strstr(char *haystack, char *needle)
{
int i;
int n;
int c;
n = strlen(haystack);
for(i = 0; i < n; i++)
{
if (haystack[i] == needle[0])
{
c = 1;
while(  (needle[c] == haystack[i+c]) && (c < strlen(needle) ) )
c++;
}
if(c == strlen(needle))
return (&haystack[i]);
else
{
c = 0;
}
}
}
return (NULL);
}
