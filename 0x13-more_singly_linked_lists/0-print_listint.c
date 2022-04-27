#include <stddef.h>
#include "lists.h"
#include <stdio.h>
/**
 *print_listint- prints lists
 *@h: linked list head
 *Return: size of linked list
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;
while(h != NULL)
{
printf("%i\n", h -> n);
count = count + 1;
h = h -> next;
}
return (count);
}
