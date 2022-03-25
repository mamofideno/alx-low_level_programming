#include "main.h"
/**
 *reverse_array - reverse array
 * 
 *@a: array
 *
 *@n: size of array
 *
 *Return: void
 */
void reverse_array(int *a, int n)
{
int temp;
int i;
for (i = 0; i < (n / 2); i++)
{
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
}
