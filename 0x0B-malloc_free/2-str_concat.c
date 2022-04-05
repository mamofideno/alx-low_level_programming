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
unsigned int l;
unsigned int l2;
unsigned int tot;
tot = sizeof(s1) + sizeof(s2);
s = malloc(tot); 
if (s == NULL)
return (NULL);
l = sizeof(s1);
l2 = sizeof(s2);
for(i = 0; i < l; i++)
s[i] = s1[i];
for(i = 0; i < l2; i++)
s[i + l] = s2[i];
return (s);
}
