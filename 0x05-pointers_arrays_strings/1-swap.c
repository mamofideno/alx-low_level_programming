#include "main.h"

/**
 *swap_int - swap two integers
 *
 * @a: the first integer pointer
 *
 *@b: the second number pointer
 *
 *Return: void
 */
void swap_int(int *a, int *b)
{
int t;
t = *a;
*a = *b;
*b = t;
}
