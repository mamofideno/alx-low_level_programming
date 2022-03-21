#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_array - print elements of array
 *
 *@a: pointer to array
 *
 *@n: number of elements is array
 *
 *Return: void
 */
void print_array(int *a, int n)
{
if (n > 0)
{
int i;
for (i = 0; i < n - 1; i++)
printf("%i, ", a[i]);
printf("%i\n", a[i]);
}
}
