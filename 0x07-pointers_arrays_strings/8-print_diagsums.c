#include <stdio.h>
#include "main.h"
/**
 *print_diagsums - initilize arra
 *@a: source
 *
 *@size: mtrxi size
 *Return: Return pointer to destination array
 */
void print_diagsums(int *a, int size)
{
int c;
int i;
c = 0;
for (i = 0; i < size; i++)
{
c = c + *(a+i);
}
printf("%i",c);
return;
}
