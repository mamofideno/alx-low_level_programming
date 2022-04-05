#include <string.h>
/**
 *str_concat - concat the string
 *@s1: the first string
 *@s2: the second string
 *Return: string
 */
char *str_concat(char *s1, char *s2)
{
char *s;
s = strcat(s1 , s2);
if (s == NULL)
return (NULL);
return (s);
}
