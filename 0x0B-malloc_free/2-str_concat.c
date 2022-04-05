#include <string.h>
#include <stdlib.h>
/**
 *str_concat - concat the string
 *@s1: the first string
 *@s2: the second string
 *Return: string
 */
char *str_concat(char *s1, char *s2)
{
char *s;
unsigned int i;
s = malloc(sizeof(s1) + sizeof(s2)); 
s = strcat(s1 , s2);
if (s == NULL)
return (NULL);
for(i = 0; i < strlen(s1); i++)
s[i] = s1[i];
for(i = 0; i < strlen(s2); i++)
s[i + stlen(s1)] = s2[i];
return (s);
}
