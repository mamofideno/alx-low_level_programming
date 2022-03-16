/* more headers goes there */
#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_sign - checklower alphabet alphabet
 *
 * @c: - chacter to be checkced
 *
 * Return:Always void
 */
int print_sign(int c)
{
int r;
if (c < 0)
r ="-1";
else if (c == 0)
r = "00";
else
r = "+1";
return (r);
}
