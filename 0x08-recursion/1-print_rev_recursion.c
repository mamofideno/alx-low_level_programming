#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_print_rev_recursion -prints recu
 *@s: string to be printed
 *Return: void
 */
void _print_rev_recursion(char *s)
{
int len;
int i;
int temp;
len = strlen(str1);
for (i = 0; i < len/2; i++)  
{  
temp = s[i];  
s[i] = s[len - i - 1];  
s[len - i - 1] = temp;  
}  
printf("%s\n", strrev(s));
}
