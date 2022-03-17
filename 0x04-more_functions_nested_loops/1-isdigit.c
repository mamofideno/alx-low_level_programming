/* more headers goes there */
#include "main.h"
/* betty style doc for function main goes there */
/**
 * _isdigit - digit checker
 *
 * @c: -digit to be checkced
 *
 * Return:Always void
 */
int _isdigit(int c)
{
int r;
if (c >= 0 && c <= 9)
r = 1;
else
r = 0;
return (r);
}
