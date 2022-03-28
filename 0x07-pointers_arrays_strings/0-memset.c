#include "main.h"
/**
 *_memset - initilize arra
 *@s: array pointer
 *@b: constant to be filled
 *@n: number of elements
 *Return: Return pointer to array
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
