#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *print_rev - print the strings
 *
 *@s: char to be printed
 *
 *Return: return void
 */
void print_rev(char *s)
{
  printf("%s\n", (char *)strrev(s));
}
