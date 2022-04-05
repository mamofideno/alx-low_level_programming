#include <stdlib.h>
/**
 *
 *create_array- create array of char
 *@size: size of array
 *@c: character
 */
char *create_array(unsigned int size, char c)
{
int i;
char *arr;
if(size == 0)
return (NULL);
arr = malloc(sizeof(char) * size);
for(i = 0; i < size; i++)
arr[i] = c;
return (arr);
}
