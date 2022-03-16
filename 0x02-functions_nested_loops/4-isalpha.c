/* more headers goes there */
#include "main.h"
/* betty style doc for function main goes there */
/**
 * _isalpha - checklower alphabet alphabet
 *
 * @c: - chacter to be checkced
 *
 * Return:Always void
 */
int _isalpha(int c)
{
int r;
if (( c >= 'A') && ( c <= 'z' ))
r = 1;
else
r = 0;
return (r);
}
