#include <string.h>
#include "main.h"
/**
 *_strcat - string concat
 *@dest: destination
 *@src: source
 *@n: size
 *Return: return character
 */
char *_strncat(char *dest, char *src, int n)
{
  return strcat(dest, src, n);
}
