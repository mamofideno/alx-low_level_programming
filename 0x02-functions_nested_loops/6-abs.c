/* more headers goes there */
#include "main.h"
/* betty style doc for function main goes there */
/**
 * _abs - checklower alphabet alphabet
 *
 * @c: - chacter to be checkced
 *
 * Return:Always void
 */
int _abs(int c)
{
int r;
if (c < 0)
r = c* -1;
else if (c == 0)
r = 0;
else
r = c;
return (r);
}
