#include "main.h"
#include <stdio.h>
/**
 *_puts_recursion -prints recu
 *@s: string to be printed
 *Return: void
 */
void _puts_recursion(char *s)
{
puts(s[0]);
if( strlen(s) > 1)
{
_puts_recursion(&s[1]);    
}
}
