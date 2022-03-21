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
int size;
int i;
int j;
char str;
size=strlen(s);
j=0;
for (i = size - 1; i >j; i--)
{
str=s[j];
s[j]=s[i];
s[i]=str; 
j=j+1;
}
printf("%s\n", s);
 return;
}
